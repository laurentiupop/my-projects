/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 14:11:32 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:10:53 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_strcpy(char *dest, char *src)
{
	int index;

	index = 0;
	while (*(src + index) != '\0')
	{
		*(dest + index) = *(src + index);
		index++;
	}
	*(dest + index) = '\0';
	return (dest);
}
