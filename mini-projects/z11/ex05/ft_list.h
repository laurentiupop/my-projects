/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 11:15:37 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 22:30:09 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_FT_LIST_H
# define FT_FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
t_list				*ft_create_elem(void *data);
#endif
