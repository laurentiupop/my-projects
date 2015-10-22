/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 21:30:24 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 22:31:44 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (*(dest + i) != '\0')
		i++;
	j = 0;
	while (*(src + j) != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
	}
	*(src + i) = *(src + j);
	return (dest);
}

char *ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int j;
	int c;

	if (nb < 0)
		return (ft_strcat(dest, src));
	c = 0;
	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	while (*(src + j) != '\0' && c < nb)
	{
		*(dest + i) = *(src + j);
		i++;
		j++;
		c++;
	}
	*(dest + i) = '\0';
	return (dest);
}
