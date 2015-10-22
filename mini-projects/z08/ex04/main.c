/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ddanciu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 13:06:39 by ddanciu           #+#    #+#             */
/*   Updated: 2014/09/15 13:06:41 by ddanciu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_par.h"
#include <stdio.h>

void ft_show_tab(struct s_stock_par *par);
struct s_stock_par *ft_param_to_tab (int ac, char **av);

int main(int argc, char **argv)
{
	t_stock_par *p;

	p = (t_stock_par *)malloc((argc + 1) * sizeof(t_stock_par));\
	p = ft_param_to_tab(argc, argv);
	ft_show_tab(p);
	return (0);
}
