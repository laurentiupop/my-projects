/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 05:23:11 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 16:43:09 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i - 1] == ' ' || i == 0)
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		i = i + 1;
	}
	return (str);
}
