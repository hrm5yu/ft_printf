/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 15:10:14 by shirama           #+#    #+#             */
/*   Updated: 2021/01/17 16:47:34 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		align_right(int width, t_args *args)
{
	int		res;

	res = 0;
	while (width - args->putlen > 0 && !args->align_left)
	{
		res += ft_putchar((args->fill_zero && !args->has_pre) ? '0' : ' ');
		width--;
	}
	return (res);
}

int		align_left(int width, t_args *args)
{
	int		res;

	res = 0;
	while (width - args->putlen > 0 && args->align_left)
	{
		res += ft_putchar(' ');
		width--;
	}
	return (res);
}

int		ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int		ft_putstr(char *str)
{
	int		res;

	res = 0;
	while (*str)
	{
		write(1, str, 1);
		str++;
		res++;
	}
	return (res);
}
