/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 12:19:26 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 14:58:43 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"

char	*ft_strcpy(char *dest, char *src)
{
	while (*src != '\0')
		*dest++ = *src++;
	*(dest) = '\0';
	return (dest);
}

char	*ft_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	while (*src != '\0')
		*dest++ = *src++;
	*(dest) = '\0';
	return (dest);
}
