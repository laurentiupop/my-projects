/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_append.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:08:53 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:08:55 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_append(char *str, char character)
{
	int index;

	index = ft_strlen(str) + 1;
	str[index + 1] = str[index];
	str[index] = character;
}
