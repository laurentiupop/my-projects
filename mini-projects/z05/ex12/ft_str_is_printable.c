/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 05:51:11 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 22:04:34 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_str_is_printable(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] <= 21 && str[i] >= 127)
			return (0);
		i = i + 1;
	}
	return (1);
}
