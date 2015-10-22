/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itot_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:33:48 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 11:34:32 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

static void		ft_lengths(int n, size_t *len, int *weight)
{
	*len = 1;
	if (n >= 0)
	{
		*len = 0;
		n = -n;
	}
	*weight = 1;
	while (n / *weight < -9)
	{
		*weight *= 10;
		*len += 1;
	}
}

t_str			*ft_itot_str(int n)
{
	size_t		len;
	int			weight;
	size_t		i;
	t_str		*str;

	ft_lengths(n, &len, &weight);
	if ((str = ft_t_strnew(NULL, len)) == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str->s[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str->s[i++] = -(n / weight % 10) + 48;
		weight /= 10;
	}
	return (str);
}
