/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 19:52:45 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 22:37:28 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*list;
	t_list	*temp;
	t_list	*back;
	int		i;

	list = begin_list;
	i = 0;
	back = begin_list;
	temp = NULL;
	while (list)
	{
		while ((*cmp)(list->data ,data_ref) == 0)
		{
			i++;
			temp->next = list;
			if (i > 1)
				back = back->next;
		}
		if ((*cmp)(list->data, data_ref) != 0)
		{
			free(list);
			list = back;
	}
}
