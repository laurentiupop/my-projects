/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkcolle.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 12:04:28 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:22:02 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

extern t_colle *g_colle[5];

int		ft_isvalidcolle(char *input, int collenr)
{
	int		index;
	int		line_nr;
	int		nr_rows;
	char	*line;
	int		valid;

	index = 0;
	line_nr = 0;
	valid = 1;
	nr_rows = ft_colle_rows(input);
	while (input[index] != '\0')
	{
		line = ft_buildline(input, &index);
		line_nr++;
		if (line_nr == 1 && valid == 1)
			valid = ft_validate_top_line(line, g_colle[collenr]->first_line);
		if (line_nr < nr_rows && line_nr > 1 && valid == 1)
			valid = ft_validate_inter_line(line, g_colle[collenr]->inter_line);
		if (line_nr == nr_rows && valid == 1 && nr_rows != 1)
			valid = ft_validate_bottom_line(line, g_colle[collenr]->final_line);
	}
	return (valid);
}

int		*ft_whatcolle(char *input)
{
	int index;
	int	*whatcolle;

	index = 0;
	whatcolle = (int*)malloc(sizeof(int) * 5);
	while (index < 5)
	{
		whatcolle[index] = -1;
		index++;
	}
	if (input[0] == 'o')
		whatcolle[0] = 1;
	if (input[0] == '/')
		whatcolle[1] = 1;
	if (input[0] == 'A' || (input[0] == 'A' && input[1] == 'B'))
	{
		whatcolle[2] = 1;
		whatcolle[3] = 1;
		whatcolle[4] = 1;
	}
	return (whatcolle);
}

void	ft_checkcolle(char *input)
{
	int index;
	int *whatcolle;
	int check;

	index = 0;
	check = 0;
	whatcolle = ft_whatcolle(input);
	while (index < 5)
	{
		if (whatcolle[index] == 1)
		{
			if (ft_isvalidcolle(input, index) == 1)
			{
				check = 1;
				ft_printcolle(input, index);
				if (index <= 3 && ft_isvalidcolle(input, index + 1) == 1)
					write(1, " || ", 4);
			}
		}
		index++;
	}
	if (check == 0)
		write(1, "aucune\n", 7);
	else
		write(1, "\n", 1);
}
