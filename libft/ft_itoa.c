/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/13 23:04:09 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:55:17 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_nbr(long n)
{
	int		i;

	i = 0;
	while (n > 0)
	{
		n /= 10;
		i++;
	}
	return (i);
}

static long		pow_10(int n)
{
	long	i;

	i = 1;
	while (n--)
		i *= 10;
	return (i);
}

static void		set_nbr(char *p, long nbr)
{
	int		len;
	int		i;
	long	x;

	i = 0;
	len = count_nbr(nbr);
	x = pow_10(len) / 10;
	while (i < len)
	{
		p[i] = (char)((nbr / x) % 10 + '0');
		x /= 10;
		i++;
	}
	if (len == 0)
		p[i++] = '0';
	p[i] = '\0';
}

char			*ft_itoa(int n)
{
	char	*p;
	int		i;
	long	nbr;

	i = 0;
	nbr = n;
	nbr = nbr < 0 ? -nbr : nbr;
	if (n > 0)
		p = (char *)malloc(sizeof(char) * count_nbr(nbr) + 1);
	else
		p = (char *)malloc(sizeof(char) * count_nbr(nbr) + 2);
	if (!(p))
		return (NULL);
	if (n < 0)
		p[i++] = '-';
	set_nbr(p + i, nbr);
	return (p);
}

/*
**int		main(void)
**{
**	printf("return:%12s arg:%12d\n", ft_itoa(0), 0);
**	printf("return:%12s arg:%12d\n", ft_itoa(1234567890), 1234567890);
**	printf("return:%12s arg:%12d\n", ft_itoa(-1234567890), -1234567890);
**	printf("return:%12s arg:%12d\n", ft_itoa(INT_MAX), INT_MAX);
**	printf("return:%12s arg:%12d\n", ft_itoa(INT_MIN), INT_MIN);
**	return (0);
**}
*/
