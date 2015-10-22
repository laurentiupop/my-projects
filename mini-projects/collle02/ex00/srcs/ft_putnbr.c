/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:09:09 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:09:12 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_putnbr(int number)
{
	int clone[20];
	int position;

	position = 0;
	if (number == 0)
		ft_putchar('0');
	if (number < 0)
	{
		ft_putchar('-');
		number = (-1) * number;
	}
	while (number != 0)
	{
		clone[position] = number % 10;
		number /= 10;
		++position;
	}
	--position;
	while (position > -1)
	{
		ft_putchar((char)clone[position] + 48);
		--position;
	}
}
