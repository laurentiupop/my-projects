/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 11:05:20 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 16:38:45 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINT_H
# define FT_PRINT_H

# include <unistd.h>

void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_show(int nb, char *arg1, char *arg2, int test);
int		ft_test_tab(int *tab);

#endif
