/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/18 20:41:14 by flpop             #+#    #+#             */
/*   Updated: 2014/12/04 18:04:06 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 100

# include <string.h>
# include <stdlib.h>
# include <fcntl.h>
# include <unistd.h>
# include "libft.h"

int get_next_line(int const fd, char **line);

#endif
