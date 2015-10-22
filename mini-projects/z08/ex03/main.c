/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 11:39:41 by flpop             #+#    #+#             */
/*   Updated: 2014/09/15 18:20:58 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_point.h"

void set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}
int main(void)
{
	t_point point;
	set_point(&point);
	printf("%d", point.x);
	return (0);
}
