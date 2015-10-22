/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:29:51 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 11:32:09 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

static void		lengths(int n, size_t *len, int *weight)
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

char			*ft_itoa(int n)
{
	size_t		len;
	int			weight;
	size_t		i;
	char		*str;

	lengths(n, &len, &weight);
	str = (char *)malloc(sizeof(*str) * (len + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	if (n < 0)
	{
		str[i] = '-';
		i++;
	}
	if (n > 0)
		n = -n;
	while (weight >= 1)
	{
		str[i++] = -(n / weight % 10) + 48;
		weight /= 10;
	}
	str[i] = '\0';
	return (str);
}
