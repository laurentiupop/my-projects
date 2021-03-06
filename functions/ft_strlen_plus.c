/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen_plus.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 12:43:52 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 12:46:52 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t ft_strlen_plus(const char *s)
{
	const char *a;

	a = s;
	while (*a != '\0')
		a++;
	a++;
	return (a - s);
}
