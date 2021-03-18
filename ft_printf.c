/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/17 18:26:36 by shirama           #+#    #+#             */
/*   Updated: 2021/01/17 16:47:33 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

int		ft_put_conv(t_args *args, va_list ap)
{
	if (args->c == 's')
		return (ft_put_s(args, ap));
	else if (args->c == 'd' || args->c == 'i')
		return (ft_put_d(args, ap));
	else if (args->c == 'x' || args->c == 'X')
		return (ft_put_x(args, ap));
	else if (args->c == 'p')
		return (ft_put_p(args, ap));
	else if (args->c == 'u')
		return (ft_put_u(args, ap));
	else if (args->c == 'c' || args->c == '%')
		return (ft_put_c(args, ap));
	return (0);
}

int		ft_printf(const char *fmt, ...)
{
	int		res;
	char	*itr;
	t_args	args;
	va_list	ap;

	itr = (char *)fmt;
	if (!itr)
		return (0);
	res = 0;
	va_start(ap, fmt);
	while (*itr)
	{
		if (*itr == '%')
		{
			itr = read_args(&args, ++itr, ap, &res);
			if (args.c == 0)
				return (-1);
			res += ft_put_conv(&args, ap);
			continue;
		}
		res += ft_putchar(*itr);
		itr++;
	}
	va_end(ap);
	return (res);
}
