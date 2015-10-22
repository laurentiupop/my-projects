/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 23:22:31 by flpop             #+#    #+#             */
/*   Updated: 2014/09/08 23:33:07 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_power(int nb, int power)
{
	if (power > 0)
	{
		while (power > 0)
			return (nb * ft_recursive_power(nb, power - 1));
	}
	else
	if (power == 0)
		return (1);
	else
		return (0);
	return (0);
}
