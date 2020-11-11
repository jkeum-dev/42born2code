/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/01 15:38:45 by jkeum             #+#    #+#             */
/*   Updated: 2020/11/10 19:43:21 by jkeum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include "../libft/libft.h"

typedef struct	s_obj
{
	int		left;
	int		zero;
	int		sign;
	int		space;
	int		prefix;
	int		width;
	int		precision;
	char	type;
	int		len;
	int		idx;
	int		neg;
	int		dot;
	int		return_value;
}				t_obj;

int		print_int(va_list args, t_obj *obj);
int		print_char(va_list args, t_obj *obj);
void	check_width(const char *str, t_obj *obj, va_list args);
void	check_precision(const char *str, t_obj *obj, va_list args);
void	check_flag(const char *str, t_obj *obj);
int		check_type(va_list args, t_obj *obj);
int		check_format(const char *str, va_list args, t_obj *obj);
char	*fill_precision(t_obj *obj, char *prev);
char	*fill_width(t_obj *obj, char *prev);
char	*ft_lltoa(long long n);

#endif