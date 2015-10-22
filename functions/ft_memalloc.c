/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/06 13:49:57 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 11:59:01 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	void	*ptr;

	if (size == 0)
		return (NULL);
	ptr = malloc(sizeof(char) * size);
	if (!ptr)
		return (NULL);
	ft_memset(ptr, 0, size);
	return (ptr);
}
