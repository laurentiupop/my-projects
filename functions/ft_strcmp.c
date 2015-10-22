/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:42:29 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 12:48:47 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "includes/libft.h"

int		ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;
	size_t	len2;
	int		result;

	len = ft_strlen_plus(s1);
	len2 = ft_strlen_plus(s2);
	len = (len <= len2) ? len : len2;
	result = ft_memcmp(s1, s2, len);
	return (result);
}
