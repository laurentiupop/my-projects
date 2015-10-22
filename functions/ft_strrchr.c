/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:16:42 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 13:34:25 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*aux;

	aux = (char *)s + ft_strlen(s);
	while (*aux != c)
	{
		if (aux == s)
		{
			return (NULL);
		}
		aux--;
	}
	return (aux);
}
