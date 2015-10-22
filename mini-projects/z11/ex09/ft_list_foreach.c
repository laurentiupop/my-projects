/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 18:18:03 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 19:48:21 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_pt;

	list_pt = begin_list;
	while (list_pt)
	{
		(*f)(list_ptr->data);
		list_pt = list_pt->next;
	}
}
