/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 14:20:14 by shirama           #+#    #+#             */
/*   Updated: 2020/11/23 00:33:42 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dest;

	dest = (unsigned char *)b;
	while (len--)
		*dest++ = (unsigned char)c;
	return (b);
}

/*
**int		main(void)
**{
**	char	a[10];
**	char	b[10];
**	char	c[10];
**	char	d[10];
**	char	e[10];
**	char	f[10];
**	char	g[10];
**	char	h[10];
**
**	memset(a, '\0', sizeof(a));
**	ft_memset(b, '\0', sizeof(b));
**	printf("%d\n", memcmp(a, b, sizeof(a)));
**	memset(c, '\n', sizeof(c));
**	ft_memset(d, '\n', sizeof(d));
**	printf("%d\n", memcmp(c, d, sizeof(c)));
**	memset(e, 'a', sizeof(e));
**	ft_memset(f, 'a', sizeof(f));
**	printf("%d\n", memcmp(e, f, sizeof(e)));
**	memset(g, INT_MAX, sizeof(g));
**	ft_memset(h, INT_MAX, sizeof(h));
**	printf("%d\n", memcmp(g, h, sizeof(g)));
**	return (0);
**}
*/
