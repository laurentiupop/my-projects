/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 21:58:04 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 22:18:24 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;
	int c;
	int n;
	int k;

	c = 0;
	i = 0;
	j = 0;
	while (*(dest + i) != '\0')
		i++;
	n = (i * ((int)size >= i) + (int)size * ((int)size < i));
	c = (i * ((int)size < i) + (int)size * ((int)size >= i))
		+ ((-1) * ((int)size >= i));
	while (*(src + j) != '\0' && i < c)
	{
		*(dest + i++) = *(src + j++);
	}
	*(dest + i) = '\0';
	if (i == 0)
		return (0);
	k = 0;
	while (*(src + k++) != '\0')
		n = n + 1;
	return ((unsigned)n);
}
