/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:10:58 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 13:11:53 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t  ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*c;
	char 	*r;
	size_t	len;

	c = (char *)ft_memchr(dst, '\0', size);
	if (c == NULL)
		return (size + ft_strlen(src));
	r = (char *)src;
	len = (size_t)(c - dst) + ft_strlen(r);
	while ((size_t)(c - dst) < size - 1 && *r != '\0')
	{
		*c = *r;
		c++;
		r++;
	}
	*c = '\0';
	return (len);
}
