/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:26:57 by shirama           #+#    #+#             */
/*   Updated: 2020/11/27 00:02:08 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	nbr_len(long nbr)
{
	size_t	i;

	i = 0;
	while (nbr)
	{
		nbr /= 10;
		i++;
	}
	return (i);
}

static long		pow_ten(long nbr)
{
	long	i;
	size_t	len;

	i = 1;
	len = nbr_len(nbr);
	while (len--)
		i *= 10;
	return (i / 10);
}

void			ft_putnbr_fd(int n, int fd)
{
	long	nbr;
	long	i;

	nbr = n;
	nbr = nbr < 0 ? -nbr : nbr;
	if (n < 0)
		ft_putchar_fd('-', fd);
	else if (n == 0)
		ft_putchar_fd('0', fd);
	i = pow_ten(nbr);
	while (i)
	{
		ft_putchar_fd(nbr / i % 10 + '0', fd);
		i /= 10;
	}
}

/*
**int		main(void)
**{
**	ft_putnbr_fd(123, 1);
**	printf("\n");
**	ft_putnbr_fd(-123, 1);
**	printf("\n");
**	ft_putnbr_fd(0, 1);
**	printf("\n");
**	ft_putnbr_fd(INT_MAX, 1);
**	printf("\n");
**	ft_putnbr_fd(INT_MIN, 1);
**	printf("\n");
**	return (0);
**}
*/
