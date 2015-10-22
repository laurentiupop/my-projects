/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/11 12:52:14 by flpop             #+#    #+#             */
/*   Updated: 2014/09/11 12:56:35 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void    ft_putchar(char c);
void    ft_putstr(char *str)
{
	int i;

	i = 0;
	while (*(str + i) != '\0')
	{
		ft_putchar(*(str + i));
		i++;
	}
}

int             ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (*(s1 + i) != '\0' && *(s2 + i) != '\0')
	{
		if (*(s1 + i) < *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		else if (*(s1 + i) > *(s2 + i))
			return (*(s1 + i) - *(s2 + i));
		else
		{
			if (*(s1 + i) == '\0' || *(s2 + i) == '\0')
				return (*(s1 + i) - *(s2 + i));
		}
		i++;
	}
	return (*(s1 + i) - *(s2 + i));
}

void    ft_print_params(int n, char **str)
{
	int i;

	i = 1;
	while (i < n)
	{
		ft_putstr(*(str + i));
		ft_putchar('\n');
		i++;
	}
}

int             main(int argc, char **argv)
{
	char    *aux;
	int             i;
	int             j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(*(argv + i), *(argv + j)) > 0)
			{
				aux = *(argv + i);
				*(argv + i) = *(argv + j);
				*(argv + j) = aux;
			}
			j++;
		}
		i++;
	}
	ft_print_params(argc, argv);
	return (0);
}
