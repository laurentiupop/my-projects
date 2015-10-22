/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 05:54:27 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 22:23:12 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_putnbr_base(int nbr, char *base)
{
	int	i;

	i = 0;
	while (base[i])
		i = i + 1;
	if (nbr == 0)
		return (0);
	if (nbr < 0)
	{
		nbr = nbr * (-1);
		ft_putchar('-');
	}
	ft_putnbr_base(nbr / i, base);
	ft_putchar(base[nbr % i]);
}
