/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 13:06:05 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 13:06:07 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	**g_a;
char	*g_ptr;
int		g_k;
int		g_i;
int		g_j;
int		g_test;

int		ib(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	return (0);
}

int		size(char *str)
{
	int i;
	int thesize;

	if (*str == '\0')
		return (0);
	thesize = 0;
	i = 1;
	if (!ib(str[0]))
		thesize++;
	while (*(str + i) != '\0')
	{
		if (ib(*(str + i - 1)) && !ib(*(str + i)))
		{
			thesize++;
		}
		i++;
	}
	return (thesize + 1);
}

char	*ft_str(char *str)
{
	char	*cpy;
	int		len;
	char	ch;
	int		i;

	len = 0;
	i = 1;
	ch = *(str);
	while (ch != '\0')
	{
		len++;
		ch = *(str + i++);
	}
	cpy = (char *)malloc(len + 1);
	i = 0;
	while (*(str + i) != '\0')
	{
		*(cpy + i) = *(str + i);
		i++;
	}
	*(cpy + i) = '\0';
	*(cpy + len) = '\0';
	return (cpy);
}

void	in(char *str)
{
	if (g_test == 0)
	{
		g_i = ib(str[0]);
		g_i = g_i;
		g_k = 0;
		g_a = (char **)malloc(sizeof(char *) * size(str));
		g_ptr = ft_str(str);
		g_a = g_a;
		g_a[size(str)] = NULL;
		g_test = 1;
	}
	else
	{
		g_j = 0;
		*(g_ptr + 1) = '\0';
		g_a[g_k++] = g_ptr;
	}
}

char	**ft_split_whitespaces(char *str)
{
	g_test = 0;
	in(str);
	while (*(str + g_i) != '\0')
	{
		if ((ib(*(str + g_i - 1)) && !ib(*(str + g_i)))
				|| ((g_i == 0) && !ib(*(str + g_i))))
		{
			g_ptr = ft_str(str + g_i);
			g_j = 0;
		}
		else if ((!ib(*(str + g_i)) && ib(*(str + g_i + 1)))
				|| (!ib(*(str + g_i)) && *(str + g_i + 1) == '\0'))
		{
			*(g_ptr + g_j + 2) = '\0';
			g_a[g_k++] = g_ptr;
		}
		else
			g_j++;
		if ((ib(*(str + g_i - 1)) || (g_i == 0)) && (ib(*(str + g_i + 1))
					|| (*(str + g_i + 1) == '\0')) && !ib(*(str + g_i)))
			in(str);
		g_i++;
	}
	return (g_a);
}
