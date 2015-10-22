/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:00:53 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 12:04:09 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*i;

	i = (unsigned char *)s;
	while (n--)
	{
		if (*i == c)
			return (i);
		if (n)
			i++;
	}
	return (NULL);
}
