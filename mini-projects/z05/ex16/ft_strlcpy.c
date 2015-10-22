/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/10 22:20:46 by flpop             #+#    #+#             */
/*   Updated: 2014/09/10 22:21:32 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int i;
	int n;
	int k;

	i = 0;
	n = 0;
	while (*(src + i) != '\0' && i < (int)size - 1)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
	k = 0;
	while (*(src + k++) != '\0')
		n = n + 1;
	return ((unsigned)n);
}
