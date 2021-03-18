/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/16 13:53:30 by shirama           #+#    #+#             */
/*   Updated: 2021/01/17 16:42:10 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "libft/libft.h"

void	init_args(t_args *args)
{
	args->c = 0;
	args->width = 0;
	args->has_width = 0;
	args->pre = 0;
	args->has_pre = 0;
	args->fill_zero = 0;
	args->align_left = 0;
	args->putlen = 0;
}

char	*ft_get_flag(t_args *args, char *itr)
{
	while (*itr)
	{
		if (*itr == '-')
		{
			args->align_left = 1;
			itr++;
		}
		else if (*itr == '0')
		{
			args->fill_zero = 1;
			itr++;
		}
		else
			return (itr);
	}
	return (itr);
}

void	ft_get_width(t_args *args, char **itr, va_list ap)
{
	args->has_width = 1;
	args->width = (**itr == '*') ? va_arg(ap, int) : ft_atoi(*itr);
	if (args->width < 0)
	{
		args->width *= -1;
		args->align_left = 1;
		args->fill_zero = 0;
	}
	*itr += (**itr == '*') ? 1 : ft_get_digit(args->width);
}

void	ft_get_precision(t_args *args, char **itr, va_list ap)
{
	args->has_pre = 1;
	args->pre = (**itr == '*') ? va_arg(ap, int) : ft_atoi(*itr);
	if (args->pre < 0)
		args->has_pre = 0;
	if (**itr == '*')
		(*itr)++;
	else
		while (ft_isdigit(**itr))
			(*itr)++;
}

char	*read_args(t_args *args, char *itr, va_list ap, int *res)
{
	init_args(args);
	if (*itr == ' ')
		*res += ft_putchar(' ');
	while (ft_isspace(*itr))
		itr++;
	if (ft_strchr("-0", *itr))
		itr = ft_get_flag(args, itr);
	if (ft_isdigit(*itr) || *itr == '*')
		ft_get_width(args, &itr, ap);
	if (*itr == '.')
	{
		args->has_pre = 1;
		itr++;
	}
	if (ft_isdigit(*itr) || *itr == '*')
		ft_get_precision(args, &itr, ap);
	if (ft_strchr("cspdiuxX%%", *itr))
	{
		args->c = *itr++;
		return (itr);
	}
	itr++;
	return (itr);
}
