/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:06:09 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 15:06:17 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
t_list *ft_list_last(t_list *begin_list)
{
	t_list *list;

	list = begin_list;
	while (list)
	{
		if (!list->next)
			return (list);
		list = list->next;
	}
	return (0);
}
