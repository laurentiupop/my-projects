/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   foutput.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:08:38 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:08:41 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

void	ft_printcolle(char *input, int collenumber)
{
	int row_nr;
	int col_nr;

	row_nr = ft_colle_rows(input);
	col_nr = ft_colle_cols(input);
	write(1, "[colle-0", 8);
	ft_putnbr(collenumber);
	write(1, "] [", 3);
	ft_putnbr(col_nr);
	write(1, "] [", 3);
	ft_putnbr(row_nr);
	write(1, "]", 1);
}
