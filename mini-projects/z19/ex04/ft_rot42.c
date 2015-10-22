/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/18 21:32:02 by flpop             #+#    #+#             */
/*   Updated: 2014/09/18 21:53:45 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	rotate_maj(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	rotate_min(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	rotate(char c)
{
	if (c >= 65 && c <= 90)
		return (rotate_maj(c));
	else if (c >= 97 && c <= 122)
		return (rotate_min(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		str[i] = rotate(str[i]);
		i++;
	}
	return (str);
}
