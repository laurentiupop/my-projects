/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colle-01.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbretoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:25:42 by rbretoiu          #+#    #+#             */
/*   Updated: 2014/09/14 19:20:06 by rbretoiu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		g_pos[9][9];
int		g_orig[9][9];
int		g_check;
int		*g_ptr_check;

int			ft_print_sudoku(int pos[9][9]);

void		ft_set_pos(int *pos, int *orig, int i, int check);

int			ft_sudoku_table(int pos[9][9], char **argv);

int			ft_checkall(int orig[9][9]);

int			ft_cond2(int pos[9][9], int x, int y, int nbr)
{
	int		xmin;
	int		xmax;
	int		ymin;
	int		ymax;
	int		i;

	xmin = (x / 3) * 3;
	xmax = xmin + 3;
	ymin = (y / 3) * 3;
	ymax = ymin + 3;
	while (ymin < ymax)
	{
		i = xmin;
		while (i < xmax)
		{
			if (pos[ymin][i] == nbr && i != x && ymin != y)
				return (0);
			i++;
		}
		ymin++;
	}
	return (1);
}

int			ft_cond1(int pos[9][9], int col, int lin, int nbr)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (i != col && pos[lin][i] == nbr)
			return (0);
		i++;
	}
	i = 0;
	while (i < 9)
	{
		if (i != lin && pos[i][col] == nbr)
			return (0);
		i++;
	}
	i = ft_cond2(pos, col, lin, nbr);
	return (i);
}

void		ft_put_last_nr(int pos[9][9], int nr, int *check)
{
	if (ft_cond1(pos, 8, 8, nr))
	{
		if (pos[8][8] == 0)
			pos[8][8] = nr;
		*check = *check + 1;
	}
}

int			ft_solutie(int pos[9][9], int val, int orig[9][9], int *check)
{
	int		nbr;
	int		col;
	int		lin;

	col = val % 9;
	lin = val / 9;
	if (pos[lin][col] != 0 && (col != 8 || lin != 8) && *check < 2)
		ft_solutie(pos, val + 1, orig, check);
	nbr = 1;
	while (nbr < 10 && *check < 2)
	{
		if (col != 8 || lin != 8)
		{
			if (ft_cond1(pos, col, lin, nbr) && pos[lin][col] == 0)
			{
				ft_set_pos(&pos[lin][col], &orig[lin][col], nbr, *check);
				ft_solutie(pos, val + 1, orig, check);
				pos[lin][col] = 0;
			}
		}
		else
			ft_put_last_nr(orig, nbr, check);
		nbr++;
	}
	return (0);
}

int			main(int argc, char **argv)
{
	g_check = 0;
	g_ptr_check = &g_check;
	if (argc == 10)
	{
		ft_sudoku_table(g_orig, &argv[1]);
		if (!ft_checkall(g_orig))
		{
			write(1, "Erreur\n", 7);
			return (0);
		}
		if (ft_sudoku_table(g_pos, &argv[1]))
		{
			ft_solutie(g_pos, 0, g_orig, g_ptr_check);
			if (g_check == 1)
				ft_print_sudoku(g_orig);
			else
				write(1, "Erreur\n", 7);
		}
		else
			write(1, "Erreur\n", 7);
	}
	else
		write(1, "Erreur\n", 7);
	return (0);
}
