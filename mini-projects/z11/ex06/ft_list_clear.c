/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 13:10:03 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 14:43:51 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
void ft_list_clear(t_list **begin_list)
{
	t_list *list;
	t_list *temp;

	list = *begin_list;
	temp = NULL;
	while (list)
	{
		if (list->next)
			temp = list->next;
		else
			temp = NULL;
		free(list);
		list = temp;
	}
}
