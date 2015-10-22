/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 00:48:12 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 16:35:50 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (*(s1 + i) == *(s2 + i) && i != n)
	{
		i++;
		if (*(s1 + i) == *(s2 + i) && (i == n - 1))
			return (0);
	}
	if (*(s1 + i) != '\0')
		return (*(s1 + i) - *(s2 + i));
	return (-1);
}
