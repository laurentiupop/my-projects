/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:32:31 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:32:45 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
int		g_prior[5000];
char	g_op[5000];
int		g_nr[5000];
void	ft_sir(char		*s);
int		eval_expr(char	*str)
{
	ft_sir(str);
	return (g_nr[0]);
}

void	ft_putchar(char		c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int	n)
{
	int		cp;

	cp = 0;
	if (n < 0)
	{
		ft_putchar('-');
		n = n * -1;
	}
	while (n)
	{
		cp = cp * 10 + n % 10;
		n /= 10;
	}
	while (cp)
	{
		ft_putchar(cp % 10 + 48);
		cp /= 10;
	}
}

int		main(int	ac, char	**av)
{
	if (ac > 1)
	{
		ft_putnbr(eval_expr(av[1]));
		ft_putchar('\n');
	}
	return (0);
}
