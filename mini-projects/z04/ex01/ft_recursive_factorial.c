/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/08 20:57:28 by flpop             #+#    #+#             */
/*   Updated: 2014/09/08 22:17:48 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb > 0 && nb <= 12)
	{
		while (nb > 0)
		{
			if (nb == 1)
				return (1);
			else
				return (nb * ft_recursive_factorial(nb - 1));
		}
	}
	else
	if (nb == 0)
		return (1);
	else
		return (0);
	return (0);
}
