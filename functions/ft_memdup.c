/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:08:14 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 12:08:19 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_memdup(char *s, size_t size)
{
	char	*new;

	if ((new = ft_memnew(size)) == NULL)
		return (NULL);
	ft_memcpy(new, s, size);
	return (new);
}
