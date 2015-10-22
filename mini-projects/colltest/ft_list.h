/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 11:04:49 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 12:24:15 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIST_H
# define FT_LIST_H

# include <stdlib.h>

typedef	struct		s_list
{
	struct s_list	*next;
	char			str[129];
}					t_list;

t_list				*ft_create_elem(char *str);
void				ft_list_push_back(t_list **begin_list, char *str);
int					ft_list_size(t_list **begin_list);

#endif
