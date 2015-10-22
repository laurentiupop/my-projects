/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 11:06:16 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 16:34:12 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_H
# define MAIN_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include "ft_list.h"

char	*ft_check(char *str, char *cha);
void	ft_print_result(char *str, char *merge, char *merge2);
int		*ft_get_size(char *str);

#endif
