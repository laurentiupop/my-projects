/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 11:54:31 by flpop             #+#    #+#             */
/*   Updated: 2014/09/12 15:06:43 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int ft_putchar(char c);
char **ft_split_whitespaces(char *str);
int main (void)
{
	int i;
	int j;
	char **tab;


	i = 0;
	j = 0;
	tab = ft_split_whitespaces("        ana           are mere     ");
	while (tab[i])
	{
		j = 0;
		while (tab[i][j])
		{
			ft_putchar(tab[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
			return (0);
}
