/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:14:38 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 13:15:12 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t		c;

	c = 0;
	while (s2[c] != '\0' && c < n)
	{
		s1[c] = s2[c];
		c++;
	}
	while (c < n)
	{
		s1[c] = '\0';
		c++;
	}
	return (s1);
}