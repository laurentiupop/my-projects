/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_help.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbretoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/13 19:20:20 by rbretoiu          #+#    #+#             */
/*   Updated: 2014/09/16 19:08:07 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void		ft_putchar(char c)
{
	write(1, &c, 1);
}

int			ft_sudoku_table(int pos[9][9], char **argv)
{
	int		ix;
	int		iy;

	iy = 0;
	while (iy < 9)
	{
		ix = 0;
		while (ix < 9)
		{
			if (argv[iy][ix] >= '0' && argv[iy][ix] <= '9')
				pos[iy][ix] = argv[iy][ix] - '0';
			else if (argv[iy][ix] == '.')
				pos[iy][ix] = 0;
			else
				return (0);
			ix++;
		}
		if (argv[iy][ix])
			return (0);
		iy++;
	}
	return (1);
}

void		ft_print_sudoku(int pos[9][9])
{
	int		i;
	int		j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar(pos[i][j] + 48);
			if (j != 8)
				ft_putchar(' ');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void		ft_set_pos(int *pos, int *orig, int nbr, int check)
{
	*pos = nbr;
	if (check == 0)
		*orig = nbr;
}
