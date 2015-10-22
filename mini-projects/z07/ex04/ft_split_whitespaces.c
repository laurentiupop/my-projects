/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/12 21:48:19 by flpop             #+#    #+#             */
/*   Updated: 2014/09/12 21:48:35 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_calc_word(char *str, int *vect_word)
{
	int i;
	int x;
	int word;

	i = 0;
	word = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != '\n' && str[i] != '\t')
		{
			word++;
			x = 0;
			while (str[i] != 32 && str[i] && str[i] != '\n' && str[i] != '\t')
			{
				vect_word[word - 1] = x++;
				i++;
			}
		}
		while ((str[i] == 32 || str[i] == '\t' || str[i] == '\n') && str[i])
			i++;
	}
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int		i;
	int		v_lengths[100];
	char	**tab;
	int		j;
	int		z;

	tab = (char**)malloc((ft_calc_word(str, v_lengths) + 1) * sizeof(char*));
	i = 0;
	z = 0;
	while (str[z])
	{
		if (*(str + z) != 32 && str[z] != '\n' && str[z] != '\t')
		{
			j = 0;
			tab[i] = (char*)malloc((v_lengths[i] + 1) * sizeof(char));
			while (str[z] != 32 && str[z] != '\n' && str[z] != '\t' && str[z])
				*(*(tab + i) + j++) = *(str + z++);
			tab[i][j] = 0;
			i++;
		}
		while ((str[z] == ' ' || str[z] == '\n' || str[z] == '\t') && str[z])
			z++;
	}
	tab[i] = 0;
	return (tab);
}
