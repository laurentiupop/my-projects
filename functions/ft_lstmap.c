/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:57:32 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 11:57:50 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*link;

	new = NULL;
	link = NULL;
	while (lst != NULL)
	{
		if (new == NULL)
		{
			new = f(lst);
			link = new;
		}
		else
		{
			link->next = f(lst);
		}
	}
	return (new);
}
