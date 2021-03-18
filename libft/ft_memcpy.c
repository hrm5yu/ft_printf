/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/03 16:44:23 by shirama           #+#    #+#             */
/*   Updated: 2020/11/21 07:47:55 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n-- && (d != NULL || s != NULL))
		*d++ = *s++;
	return (dst);
}

/*
**int		main(void)
**{
**	char	a[] = "abcdefghijklmnopqrstuvwxyz";
**	char	b[] = "1234567890";
**	char	c[] = "abcdefghijklmnopqrstuvwxyz";
**	char	d[] = "1234567890";
**	char	e[] = "hello";
**	char	f[] = "hello";
**
**	puts("------original------");
**	printf("dest:%s\n", a);
**	printf("src:%s\n", b);
**	printf("return:%s\n", memcpy(a, b, sizeof(a)));
**	printf("dest:%s\n", a);
**	puts("---------ft----------");
**	printf("dest:%s\n", c);
**	printf("src:%s\n", d);
**	printf("return:%s\n", ft_memcpy(c, d, sizeof(c)));
**	printf("dest:%s\n", c);
**	puts("------original------");
**	printf("dest:%s\n", e);
**	printf("src:%s\n", e + 1);
**	printf("return:%s\n", memcpy(e + 1, e, sizeof(e) - 1));
**	printf("dest:%s\n", e);
**	puts("---------ft----------");
**	printf("dest:%s\n", f);
**	printf("src:%s\n", f);
**	printf("return:%s\n", ft_memcpy(f + 1, f, sizeof(f) - 1));
**	printf("dest:%s\n", f);
**	puts("------original------");
**	printf("dest:%s\n", NULL);
**	printf("src:%s\n", NULL);
**	printf("return:%s\n", memcpy(NULL, NULL, 3));
**	puts("---------ft----------");
**	printf("dest:%s\n", NULL);
**	printf("src:%s\n", NULL);
**	printf("return:%s\n", ft_memcpy(NULL, NULL, 3));
**	return (0);
**}
*/
