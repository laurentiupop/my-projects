/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/16 21:37:39 by flpop             #+#    #+#             */
/*   Updated: 2014/09/16 21:37:59 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	int		j;
	char	*aux;

	i = 0;
	while (*(tab + i + 1) != 0)
	{
		j = i + 1;
		while (*(tab + j) != 0)
		{
			if (ft_strcmp(*(tab + i), *(tab + j)) > 0)
			{
				aux = *(tab + i);
				*(tab + i) = *(tab + j);
				*(tab + j) = aux;
			}
			j++;
		}
		i++;
	}
}
