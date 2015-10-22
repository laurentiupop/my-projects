/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_realloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:09:24 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:09:26 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

char	*ft_realloc(char *string)
{
	char *retstr;

	retstr = (char*)malloc(ft_size(string) + 1);
	ft_strcpy(retstr, string);
	free(string);
	return (retstr);
}
