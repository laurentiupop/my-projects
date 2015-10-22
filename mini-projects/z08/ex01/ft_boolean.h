/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 10:10:41 by flpop             #+#    #+#             */
/*   Updated: 2014/09/19 13:26:37 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H
# include <unistd.h>
# define TRUE 1
# define FALSE 0
# define EVEN_MSG "I have a pair number of arguments."
# define ODD_MSG "I have an impair number of arguments."
# define	EVEN(x)	(!((x) % 2))
# define SUCCESS 0
typedef int	t_bool;
#endif
