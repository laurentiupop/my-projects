/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 12:42:56 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:15:55 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int		main(void)
{
	char	*string;

	string = ft_readinput(0);
	if (ft_isinputok(string) == 1)
		ft_colle(string);
	else
		write(1, "aucune\n", 7);
	return (0);
}
