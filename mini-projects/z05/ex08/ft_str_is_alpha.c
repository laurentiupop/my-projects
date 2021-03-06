/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 05:24:54 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 17:08:06 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if ((str[i] < 'a' || str[i] > 'z') && (str[i] < 'A' || str[i] > 'Z'))
			return (0);
		i = i + 1;
	}
	if (i == 1)
		return (0);
	return (1);
}
