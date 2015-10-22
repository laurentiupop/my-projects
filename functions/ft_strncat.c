/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:13:38 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 13:14:04 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char	*c;

	c = s1;
	while (*c != '\0')
	{
		c++;
	}
	while (*s2 != '\0' && n > 0)
	{
		*c = *s2;
		c++;
		s2++;
		n--;
	}
	*c = '\0';
	return (s1);
}