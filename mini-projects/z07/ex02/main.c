/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 02:18:03 by flpop             #+#    #+#             */
/*   Updated: 2014/09/15 18:03:04 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

int ft_ultimate_range(int **range, int max, int min);
int main (void)
{
	int i;
	int *kk;
	int pp;
	
	i = 0;
	pp = ft_ultimate_range(&kk, 21, 11);
	while (i <pp)
	{
		printf("%d", kk[i]);
		i++;
	}
	return (0);
}
