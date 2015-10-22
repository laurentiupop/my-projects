/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   validatefunctions.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 16:13:22 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:17:45 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		ft_validate_top_line(char *line, char *elems)
{
	int index;
	int valid;
	int length;

	length = ft_strlen(line);
	valid = 1;
	index = 1;
	if (line[0] != elems[0])
		valid = 0;
	while (index <= length - 1 && length >= 2)
	{
		if (line[index] != elems[1])
			valid = 0;
		index++;
	}
	if (index == length && length >= 1)
		if (line[index] != elems[2])
			valid = 0;
	return (valid);
}

int		ft_validate_inter_line(char *line, char *elems)
{
	int index;
	int valid;
	int length;

	length = ft_strlen(line);
	valid = 1;
	index = 1;
	if (line[0] != elems[0])
		valid = 0;
	while (index <= length - 1 && length >= 2)
	{
		if (line[index] != elems[1])
			valid = 0;
		index++;
	}
	if (index == length && length >= 1)
		if (line[index] != elems[2])
			valid = 0;
	return (valid);
}

int		ft_validate_bottom_line(char *line, char *elems)
{
	int index;
	int valid;
	int length;

	length = ft_strlen(line);
	valid = 1;
	index = 1;
	if (line[0] != elems[0])
		valid = 0;
	while (index <= length - 1 && length >= 2)
	{
		if (line[index] != elems[1])
			valid = 0;
		index++;
	}
	if (index == length && length >= 1)
		if (line[index] != elems[2])
			valid = 0;
	return (valid);
}

int		ft_colle_cols(char *input)
{
	int index;
	int nr_cols;

	index = 0;
	nr_cols = 0;
	while (input[index] != '\n')
	{
		nr_cols++;
		index++;
	}
	return (nr_cols);
}

int		ft_colle_rows(char *input)
{
	int index;
	int nr_rows;
	int was_incremented;

	index = 0;
	nr_rows = 1;
	was_incremented = -1;
	while (input[index])
	{
		if (input[index] == '\n')
		{
			was_incremented = 1;
			nr_rows++;
		}
		index++;
	}
	if (was_incremented == 1)
		return (nr_rows - 1);
	else
		return (nr_rows);
}
