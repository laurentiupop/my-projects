/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 12:19:02 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 19:01:44 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_string.h"
#include "ft_print.h"
#include "main.h"
#include "ft_colle.h"
#include <unistd.h>
char	*ft_check(char *str, char *cha)
{
	int		tab[4];

	tab[0] = 0;
	tab[1] = -1;
	tab[2] = 0;
	tab[3] = 0;
	while (str[++tab[1]] != '\0')
	{
		if (str[tab[1]] == '\n')
		{
			if (tab[2] == 0)
				tab[2] = tab[0];
			tab[3]++;
		}
		if (tab[2] == 0)
			tab[0]++;
	}
	cha[0] = str[0];
	cha[1] = str[1];
	cha[2] = str[tab[2] - 1];
	cha[3] = str[tab[2] + 1];
	cha[5] = str[(tab[2] * tab[3]) + (tab[3] - 1) - 1];
	cha[4] = str[(tab[2] * (tab[3] - 1)) + (tab[3] - 1)];
	return (cha);
}

int		*ft_get_size(char *str)
{
	int		i;
	int		j;
	int		*size;

	i = 1;
	j = 0;
	size = (int *)malloc(sizeof(2000) * 2);
	while (str[j + 1] != '\0')
	{	
	//	printf ("%d\n" , 1);
		if (str[j] == '\n')
		{
			if (size[1] == 0)
				size[1] = i;
			size[0]++;
		}
		if (size[1] == 0)
			i++;
		j++;
	}
	
		printf ("%s\n" , size);
	return (size);
}

void	ft_print_result(char *str, char *merge, char *merge2)
{
	int		ret[5];
	int		*size;
	char	*cha;

	ret[0] = 0;
	ret[1] = 0;
	ret[2] = 0;
	ret[3] = 0;
	ret[4] = 0;
	size = ft_get_size(str);
	if ((cha = (char *)malloc(sizeof(char) * 6)) != NULL)
	{
		cha = ft_check(str, cha);
		if ((ret[0] = ft_colle00(str, cha)) == 1)
			ft_show(0, *merge, *merge2, ft_test_tab(ret));
		if ((ret[1] = ft_colle01(str, cha)) == 1)
			ft_show(1, size[1], size[0], ft_test_tab(ret));
		if ((ret[2] = ft_colle02(str, cha)) == 1)
			ft_show(2, size[1], size[0], ft_test_tab(ret));
		if ((ret[3] = ft_colle03(str, cha)) == 1)
			ft_show(3, size[1], size[0], ft_test_tab(ret));
		if ((ret[4] = ft_colle04(str, cha)) == 1)
			ft_show(4, size[1], size[0], ft_test_tab(ret));
	}
}

int		main(void)
{
	t_list	*list;
	int		pos;
	char 	*merge;
	char 	*merge2;
	int		len;
	char	buff[1000000];
	char	*str;
	char	*cha;

		printf ("%d" , 1);
	while ((pos = read(0, buff, 1000000)))
	{
		buff[pos] = '\0';
		len += pos + 1;
		if (list == NULL)
			list = ft_create_elem(buff);
		else
			ft_list_push_back(&list, buff);
	}
	str = (char *)malloc(sizeof(char) * len);
	while (list != NULL)
	{
		ft_strcat(str, list->str);
		list = list->next;
	}
	printf("%s", str);
//	ft_print_result(str);
	return (0);
}
