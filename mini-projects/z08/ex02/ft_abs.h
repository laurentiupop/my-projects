/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_abs.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: flpop <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/09/15 11:30:56 by flpop             #+#    #+#             */
/*   Updated: 2014/09/15 18:13:26 by flpop            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_FT_ABS_H
# define FT_FT_ABS_H
# define ABS(Value) (Value < 0) * Value * -1 + (Value > 0) * Value
#endif
