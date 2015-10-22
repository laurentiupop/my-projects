/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   finput.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:07:27 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:18:23 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_readinput(int fd)
{
	char *string;
	char *temp;

	string = (char*)malloc(1);
	string[0] = '\0';
	temp = (char*)malloc(2);
	while (read(fd, temp, 1))
	{
		string = ft_realloc(string);
		ft_append(string, temp[0]);
	}
	free(temp);
	return (string);
}

int		ft_isinputok(char *input)
{
	int	default_length;
	int row_length;
	int index;

	default_length = ft_colle_cols(input);
	row_length = 0;
	index = default_length + 1;
	while (input[index] != '\0')
	{
		if (input[index] == '\n')
		{
			if (row_length != default_length)
				return (0);
			row_length = -1;
		}
		index++;
		row_length++;
	}
	return (1);
}

char	*ft_buildline(char *input, int *position)
{
	char *string;

	string = (char*)malloc(ft_colle_cols(input) + 1);
	string[0] = '\0';
	while (input[*position] != '\n')
	{
		ft_append(string, input[*position]);
		*position += 1;
	}
	*position += 1;
	return (string);
}
