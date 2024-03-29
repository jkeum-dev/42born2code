/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jkeum <jkeum@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 17:25:31 by jkeum             #+#    #+#             */
/*   Updated: 2020/12/12 20:32:29 by jkeum            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static t_obj	*init_objs(void)
{
	t_obj	*obj;

	if (!(obj = (t_obj *)malloc(sizeof(t_obj))))
		return (NULL);
	obj->idx = 0;
	obj->return_value = 0;
	return (obj);
}

static void		set_objs(t_obj *obj)
{
	obj->left = 0;
	obj->zero = 0;
	obj->sign = 0;
	obj->space = 0;
	obj->prefix = 0;
	obj->width = 0;
	obj->precision = 0;
	obj->type = 0;
	obj->len = 0;
	obj->neg = 0;
	obj->dot = 0;
	obj->length = 0;
	ft_bzero(obj->fobj.deci_bin, 1074);
	ft_bzero(obj->fobj.deci_five, 1074);
	ft_bzero(obj->fobj.deci_res, 1074);
	ft_bzero(obj->fobj.inte_bin, 1024);
	ft_bzero(obj->fobj.inte_two, 309);
	ft_bzero(obj->fobj.inte_res, 309);
	obj->fobj.expnt = 0;
	obj->fobj.rounding = 0;
	obj->fobj.two = 0;
	obj->fobj.res = 0;
	obj->fobj.inte_len = 0;
}

static int		is_percent(const char *str, va_list args, t_obj *obj)
{
	if (str[obj->idx] == '%')
	{
		set_objs(obj);
		if (!(check_format(str, args, obj)))
		{
			free(obj);
			return (0);
		}
	}
	else
	{
		write(1, &str[obj->idx], 1);
		obj->return_value++;
	}
	return (1);
}

int				ft_printf(const char *str, ...)
{
	va_list	args;
	t_obj	*obj;
	int		result;

	va_start(args, str);
	if (!(obj = init_objs()))
		return (-1);
	while (str[obj->idx])
	{
		if (!(is_percent(str, args, obj)))
			return (-1);
		obj->idx++;
	}
	va_end(args);
	result = obj->return_value;
	free(obj);
	return (result);
}
