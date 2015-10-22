/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/11 11:40:36 by flpop             #+#    #+#             */
/*   Updated: 2014/11/11 11:40:55 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	ft_lstdelone(t_list **link, void (*del)(void *, size_t))
{
	del(&((*link)->content), (*link)->content_size);
	free(*link);
	*link = NULL;
}
