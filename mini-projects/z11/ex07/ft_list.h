/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 11:15:37 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 15:16:07 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FT_FT_LIST_H
# define FT_FT_LIST_H

typedef struct		s_list
{
	struct s_list	*next;
	void			*data;
}					t_list;
#endif
