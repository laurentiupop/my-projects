/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 21:34:10 by flpop             #+#    #+#             */
/*   Updated: 2014/09/16 21:34:12 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes.h"
int		is_valid_sign(char *str)
{
	char c;
	char d;

	c = *str;
	d = ft_strlen(str);
	if ((c == '+' || c == '-' || c == '*' || c == '/' || c == '%') && d == 1)
		return (1);
	return (0);
}

void	init(int(*ptr[5])(int, int))
{
	ptr[0] = &plus;
	ptr[1] = &minus;
	ptr[2] = &prod;
	ptr[3] = &divide;
	ptr[4] = &mod;
}

int		choo(char c)
{
	if (c == '+')
		return (0);
	else if (c == '-')
		return (1);
	else if (c == '*')
		return (2);
	else if (c == '/')
		return (3);
	return (4);
}

int		main(int argc, char **argv)
{
	char	c;
	int		(*ptr[5])(int, int);

	if (argc == 4)
	{
		if (is_valid_sign(argv[2]))
			c = argv[2][0];
		else
		{
			ft_putstr("0\n");
			return (0);
		}
		if (c == '%' && ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : modulo by zero\n");
			return (0);
		}
		else if (c == '/' && ft_atoi(argv[3]) == 0)
		{
			ft_putstr("Stop : division by zero\n");
			return (0);
		}
		init(ptr), ft_putnbr(ptr[choo(c)](ft_atoi(argv[1]), ft_atoi(argv[3])));
	}
	return (0);
}
