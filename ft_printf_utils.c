/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:44:18 by shirama           #+#    #+#             */
/*   Updated: 2021/01/17 16:47:35 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		ft_putstrl(char *str, int len)
{
	int			res;
	int			i;

	if (!str)
		return (0);
	res = 0;
	i = 0;
	while (str[i] && i < len)
	{
		res += ft_putchar(str[i]);
		i++;
	}
	return (res);
}

int		ft_isspace(char c)
{
	return ((c >= 9 && c <= 13) || (c == 32));
}

int		ft_get_digit(int d)
{
	int		res;

	if (d == -2147483648)
		return (11);
	res = 0;
	if (d < 0)
	{
		res++;
		d *= -1;
	}
	while (d / 10)
	{
		res++;
		d /= 10;
	}
	res++;
	return (res);
}

int		ft_get_digit_u(unsigned int d)
{
	int		res;

	res = 0;
	while (d / 10)
	{
		res++;
		d /= 10;
	}
	res++;
	return (res);
}
