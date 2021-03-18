/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 13:08:19 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 16:45:08 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	int				i;

	i = 0;
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n--)
	{
		d[i] = s[i];
		if (s[i] == (unsigned char)c)
			return (d + i + 1);
		i++;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char a[] = "hello";
**	char b[] = "world";
**	printf("%s\n", memccpy(a, b, 'h', 0));
**}
**
**
**int		main(void)
**{
**		char	a[] = "abcdefghijklmnopqrstuvwxyz";
**	char	b[] = "1234567890";
**	char	c[] = "abcdefghijklmnopqrstuvwxyz";
**	char	d[] = "1234567890";
**	char	e[] = "abcdefghijklmnopqrstuvwxy";
**	char	g[] = "1234567890";
**	char	h[] = "abcdefghijklmnopqrstuvwxy";
**	char	i[] = "1234567890";
**	puts("------original------");
**	printf("dest:%s\n", a);
**	printf("src:%s\n", b);
**	printf("return:%s\n", memccpy(a, b, '5', sizeof(a)));
**	printf("dest:%s\n", a);
**	puts("---------ft----------");
**	printf("dest:%s\n", c);
**	printf("src:%s\n", d);
**	printf("return:%s\n", ft_memccpy(c, d, '5', sizeof(c)));
**	printf("dest:%s\n", c);
**	puts("------original------");
**	printf("dest:%s\n", e);
**	printf("src:%s\n", g);
**	printf("return:%s\n", memccpy(e, g, 'a', sizeof(e)));
**	printf("dest:%s\n", e);
**	puts("---------ft----------");
**	printf("dest:%s\n", h);
**	printf("src:%s\n", i);
**	printf("return:%s\n", ft_memccpy(h, i, 'a', sizeof(e)));
**	printf("dest:%s\n", h);
**	puts("------original------");
**	printf("dest:%s\n", NULL);
**	printf("src:%s\n", NULL);
**	printf("return:%s\n", memccpy(NULL, NULL, 'a', 3));
**	printf("dest:%s\n", e);
**	puts("---------ft----------");
**	printf("dest:%s\n", NULL);
**	printf("src:%s\n", NULL);
**	printf("return:%s\n", ft_memccpy(NULL, NULL, 'a', 3));
**	printf("dest:%s\n", h);
**	return (0);
**}
*/
