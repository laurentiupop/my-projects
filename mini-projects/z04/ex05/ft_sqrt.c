/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/09 00:19:37 by flpop             #+#    #+#             */
/*   Updated: 2014/09/09 14:50:35 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int i;

	i = 2;
	if (nb < 0)
		return (0);
	while (i * i < nb)
	{
		if (((i + 1) * (i + 1) > nb) || (i > 46340))
			return (0);
		i++;
	}
	return (i);
}
