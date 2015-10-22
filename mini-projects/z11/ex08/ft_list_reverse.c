/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:19:16 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 21:12:31 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_reverse(t_list **begin_list)
{
	t_list *list;
	t_list *ver;
	t_list *ver2;

	ver = NULL;
	list = *begin_list;
	if (!list || !(list->next))
		return ;
	ver = list->next;
	ver2 = ver->next;
	list->next = NULL;
	ver->next = list;
	while (ver2)
	{
		list = ver;
		ver = ver2;
		ver2 = ver2->next;
		ver->next = list;
	}
	*begin_list = ver;
}
