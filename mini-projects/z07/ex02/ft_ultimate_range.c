/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 00:44:32 by flpop             #+#    #+#             */
/*   Updated: 2014/09/12 12:40:38 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdlib.h>

int ft_ultimate_range(int **range, int min, int max)
{
	int i;
	int dim;

	i = 0;
	dim = max - min;
	if (dim < 1)
		return (0);
	*range = (int*)malloc(sizeof(int) * dim);
	while (i < dim)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (dim);
}
