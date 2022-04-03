/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nnakarac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 18:32:45 by nnakarac          #+#    #+#             */
/*   Updated: 2022/04/02 22:47:28 by nnakarac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <limits.h>

typedef struct s_prefix
{
	int		is_left;
	int		is_sign;
	int		is_space;
	int		is_preceed;
	int		is_iszero;
	int		width;
	int		precision;
	int		is_precision;
}	t_prefix;

int		ft_printf(const char *fmt, ...);
char	*ft_appendfmt(char *buff, char *ptr, int *len, va_list ap);

size_t	ft_flgchk(char *ptr);
size_t	ft_widthchk(char *ptr);
size_t	ft_precisechk(char *ptr);
size_t	ft_specchk(char *ptr);
void	ft_freeprefix(t_prefix *t_pf);
int		ft_is_left(char *ptr, t_prefix *t_pf);
int		ft_is_sign(char *ptr, t_prefix *t_pf);
int		ft_is_space(char *ptr, t_prefix *t_pf);
int		ft_is_preceed(char *ptr, t_prefix *t_pf);

#endif
