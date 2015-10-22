/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_param_to_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 14:37:38 by flpop             #+#    #+#             */
/*   Updated: 2014/09/15 18:15:04 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"

int					ft_strlen(char *str)
{
	char	ch;
	int		i;
	int		len;

	len = 0;
	i = 1;
	ch = *(str);
	while (ch != '\0')
	{
		len++;
		ch = *(str + i++);
	}
	return (len);
}

char				*ft_strdup(char *str)
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

t_stock_par			*ft_param_to_tab(int ac, char **av)
{
	t_stock_par	*p;
	int			i;
	int			len;

	p = (t_stock_par *)malloc((ac + 1) * sizeof(t_stock_par));
	i = 0;
	while (i < ac)
	{
		len = ft_strlen(*(av + i));
		(p + i)->size_param = len;
		(p + i)->str = (char *)malloc((len + 1) * sizeof(char));
		(p + i)->str = *(av + i);
		(p + i)->str[len] = '\0';
		(p + i)->copy = (char *)malloc((len + 1) * sizeof(char));
		(p + i)->copy = ft_strdup(*(av + i));
		(p + i)->tab = ft_split_whitespaces(*(av + i));
		i++;
	}
	(p + ac)->str = 0;
	return (p);
}
