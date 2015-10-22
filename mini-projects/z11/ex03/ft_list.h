/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/17 15:03:25 by flpop             #+#    #+#             */
/*   Updated: 2014/09/17 15:03:26 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_LIST_H
# define FT_FT_LIST_H
# include <stdlib.h>
typedef struct	s_list
{
	struct s_list	*next;
	void			*data;
}				t_list;
#endif
