/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 10:30:25 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 10:31:32 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int			ft_atoi(const char *str)
{
	int		sign;
	char	*i;
	int		result;

	result = 0;
	i = (char *)str;
	while (ft_isspace(*i))
		i++;
	sign = (*i == '-') ? -1 : 1;
	i = (*i == '+' || *i == '-') ? i + 1 : i;
	while (*i >= '0' && *i <= '9')
	{
		result = result * 10 + *i - 48;
		i++;
	}
	result *= sign;
	return (result);
}
