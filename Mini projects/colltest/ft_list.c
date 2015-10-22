/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 11:31:00 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 14:59:16 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include "ft_string.h"
#include <unistd.h>
t_list	*ft_create_elem(char *str)
{
	t_list *tmp;

	if ((tmp = malloc(sizeof(t_list))) == NULL)
		return (NULL);
	ft_strcpy(tmp->str, str);
	tmp->next = NULL;
	return (tmp);
}

void	ft_list_push_back(t_list **begin_list, char *str)
{
	t_list *tmp;
	t_list *l;

	tmp = ft_create_elem(str);
	if (begin_list == NULL)
		*begin_list = tmp;
	else
	{
		l = *begin_list;
		while (l->next != NULL)
			l = l->next;
		l->next = tmp;
	}
}

int		ft_list_size(t_list **begin_list)
{
	int		i;
	t_list	*ptr;

	i = 1;
	if (*begin_list == NULL)
		return (0);
	ptr = *begin_list;
	while (ptr->next != NULL)
	{
		i++;
		ptr = ptr->next;
	}
	return (i);
}
