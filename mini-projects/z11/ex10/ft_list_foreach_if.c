/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 19:41:56 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 21:13:22 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref,
		int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while (list_ptr)
	{
		if ((*cmp)(list_ptr->data, data_ref) == 0)
			(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
