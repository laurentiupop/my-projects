/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 19:46:25 by flpop             #+#    #+#             */
/*   Updated: 2014/11/22 04:46:16 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char			*ft_strnjoin(char *s1, char const *s2, int n)
{
	char		*new;
	int			len1;
	int			i;
	int			j;

	i = 0;
	len1 = (s1 == NULL) ? 0 : ft_strlen(s1);
	new = (char *)malloc((sizeof(char) * (len1 + n)) + 1);
	if (new == NULL)
		return (NULL);
	j = 0;
	while (j < len1)
		new[i++] = s1[j++];
	if (s1)
		ft_strdel(&s1);
	j = 0;
	while (j < n)
		new[i++] = s2[j++];
	new[i] = '\0';
	return (new);
}

static int		ft_read(int const fd, char **buff)
{
	int			i;

	i = 0;
	*buff = (char *)malloc((sizeof(char) * BUFF_SIZE) + 1);
	if (*buff == NULL)
		return (-1);
	i = read(fd, *buff, BUFF_SIZE);
	return (i);
}

static int		ft_buff(char **buff, int *i, char **line)
{
	while (*buff && (*buff)[(*i)])
	{
		if ((*buff)[(*i)] == '\n')
		{
			*line = ft_strnjoin(*line, *buff, (*i));
			(*i)++;
			*buff = &(*buff)[(*i)];
			return (1);
		}
		(*i)++;
	}
	return (0);
}

int				get_next_line(int const fd, char **line)
{
	static char *buff;
	int			i;
	int			j;

	*line = NULL;
	if (!buff)
		buff = ft_strnew(BUFF_SIZE + 1);
	while (1)
	{
		i = 0;
		if (ft_buff(&buff, &i, line) == 1)
			return (1);
		*line = ft_strnjoin(*line, buff, i);
		j = ft_read(fd, &buff);
		if (j < 1)
		{
			ft_strdel(&buff);
			return (j);
		}
		buff[j] = '\0';
	}
}
