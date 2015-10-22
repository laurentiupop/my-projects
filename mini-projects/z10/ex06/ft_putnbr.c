/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 21:32:58 by flpop             #+#    #+#             */
/*   Updated: 2014/09/16 21:33:00 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_putchar(char c);
void ft_putstr(char *str);
void ft_putnbr(int nb)
{
	int v[15];
	int i;

	if (nb == 0)
		ft_putstr("0\n");
	else if (nb == -2147483648)
		ft_putstr("-2147483648\n");
	else
	{
		i = 0;
		if (nb < 0)
		{
			ft_putchar('-');
			nb = nb * -1;
		}
		while (nb != 0)
		{
			v[i++] = nb % 10;
			nb = nb / 10;
		}
		while (i > 0)
			ft_putchar(v[--i] + 48);
		ft_putchar('\n');
	}
}
