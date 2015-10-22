/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 22:41:02 by flpop             #+#    #+#             */
/*   Updated: 2014/09/08 22:41:57 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int a;

	a = 1;
	while (power > 0)
	{
		a = nb * a;
		power--;
	}
	return (a);
}
