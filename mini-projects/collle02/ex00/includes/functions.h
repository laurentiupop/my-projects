/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/21 22:03:42 by flpop             #+#    #+#             */
/*   Updated: 2014/09/21 22:22:46 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <fcntl.h>
# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

typedef struct	s_colle
{
	char first_line[3];
	char inter_line[3];
	char final_line[3];
}				t_colle;

char			*ft_readinput(int fd);
void			ft_putnbr(int number);
void			ft_putchar(char character);
int				ft_isinputok(char *input);
char			*ft_strcpy(char *dest, char *src);
char			*ft_realloc(char *string);
int				ft_size(char *string);
void			ft_append(char *str, char character);
int				ft_strlen(char *src);
int				ft_colle_cols(char *input);
int				ft_colle_rows(char *input);
void			ft_colle(char *input);
void			ft_printcolle(char *input, int collenumber);
void			ft_preparecolle(void);
char			*ft_buildline(char *input, int *position);
int				*ft_whatcolle(char *input);
void			ft_checkcolle(char *input);
int				ft_isvalidcolle(char *input, int collenr);
int				ft_validate_top_line(char *line, char *elems);
int				ft_validate_inter_line(char *line, char *elems);
int				ft_validate_bottom_line(char *line, char *elems);

#endif
