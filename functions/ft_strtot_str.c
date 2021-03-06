/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtot_str.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 13:19:01 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 13:19:02 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

t_str	*ft_strtot_str(char *str)
{
	return (ft_t_strnew(str, ft_strlen(str)));
}
