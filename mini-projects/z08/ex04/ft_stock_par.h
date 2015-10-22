/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_stock_par.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 14:38:03 by flpop             #+#    #+#             */
/*   Updated: 2014/09/15 14:38:11 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_STOCK_PAR_H
# define FT_FT_STOCK_PAR_H
# include		<stdlib.h>
typedef struct	s_stock_par
{
	int		size_param;
	char	*str;
	char	*copy;
	char	**tab;
}				t_stock_par;
char			**ft_split_whitespaces(char *str);
void			ft_show_tab(t_stock_par *par);
#endif
