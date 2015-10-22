/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/06 03:37:00 by flpop             #+#    #+#             */
/*   Updated: 2014/10/06 20:15:38 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int		main(void)
{
	int		a = 15;
	int		b = 42;
	int		*div;
	int		*mod;

	div = &a;
	mod = &b;
	ft_div_mod(a, b, div, mod);
	printf("div: %d, mod: %d\n", *div, *mod);
	return (0);
}
