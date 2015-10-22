/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   preparecolle.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 16:13:05 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:17:08 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

t_colle *g_colle[5];

t_colle	*ft_collealloc(void)
{
	t_colle	*new_colle;

	new_colle = (t_colle*)malloc(sizeof(t_colle));
	return (new_colle);
}

void	ft_fillcolle(t_colle *colle, char *elems)
{
	colle->first_line[0] = elems[0];
	colle->first_line[1] = elems[1];
	colle->first_line[2] = elems[2];
	colle->inter_line[0] = elems[3];
	colle->inter_line[1] = elems[4];
	colle->inter_line[2] = elems[5];
	colle->final_line[0] = elems[6];
	colle->final_line[1] = elems[7];
	colle->final_line[2] = elems[8];
}

void	ft_preparecolle(void)
{
	g_colle[0] = ft_collealloc();
	g_colle[1] = ft_collealloc();
	g_colle[2] = ft_collealloc();
	g_colle[3] = ft_collealloc();
	g_colle[4] = ft_collealloc();
	ft_fillcolle(g_colle[0], "o-o| |o-o");
	ft_fillcolle(g_colle[1], " *\\* *\\*/");
	g_colle[1]->first_line[0] = '/';
	ft_fillcolle(g_colle[2], "ABAB BCBC");
	ft_fillcolle(g_colle[3], "ABCB BABC");
	ft_fillcolle(g_colle[4], "ABCB BCBA");
}
