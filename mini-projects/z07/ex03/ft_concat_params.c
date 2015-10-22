/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbretoiu <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 19:00:16 by rbretoiu          #+#    #+#             */
/*   Updated: 2014/09/12 21:34:50 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		len_tot(char **argv)
{
	int index1;
	int len;

	index1 = 1;
	len = 0;
	while (argv[index1] != '\0')
	{
		len = len + ft_strlen(argv[index1]);
		index1++;
	}
	return (len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (*(src + i) != '\0')
	{
		*(dest + i) = *(src + i);
		i += 1;
	}
	*(dest + i) = '\0';
	return (dest);
}

char	*ft_concat_params(int argc, char **argv)
{
	int		i;
	int		j;
	char	*str;
	int		len;

	len = len_tot(argv) + 1;
	(void)argc;
	i = 1;
	j = 0;
	str = (char*)malloc(sizeof(char) * (len));
	while (argv[i] != '\0')
	{
		ft_strcpy(&str[j], argv[i]);
		j += ft_strlen(argv[i]);
		str[j++] = '\n';
		i++;
	}
	str[--j] = '\0';
	return (str);
}
