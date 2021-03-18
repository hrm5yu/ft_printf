/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 09:36:10 by shirama           #+#    #+#             */
/*   Updated: 2020/11/21 07:47:30 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	if (d > s)
	{
		while (len-- && (d != NULL || s != NULL))
			*(d + len) = *(s + len);
	}
	else
	{
		while (len-- && (d != NULL || s != NULL))
			*d++ = *s++;
	}
	return (dest);
}

/*
**int		main(void)
**{
**	char	a[] = "abcdefghijklmnopqrstuvwxyz";
**	char	b[] = "1234567890";
**	char	c[] = "abcdefghijklmnopqrstuvwxyz";
**	char	d[] = "1234567890";
**	int		e[10];
**	char	f[] = "abcdefghijklmnopqrstuvwxyz";
**	char	g[] = "1234567890";
**	char	m[] = "abcdefghijklmnopqrstuvwxyz";
**	char	n[] = "1234567890";
**	int		i;
**
**	for (i = 0; i < 10; i++)
**		e[i] = i;
**	puts("------original------");
**	printf("dest:%s\n", a);
**	printf("src:%s\n", b);
**	printf("return:%s\n", memmove(a, b, sizeof(a)));
**	printf("dest:%s\n", a);
**	puts("---------ft----------");
**	printf("dest:%s\n", c);
**	printf("src:%s\n", d);
**	printf("return:%s\n", ft_memmove(c, d, sizeof(c)));
**	printf("dest:%s\n", c);
**	puts("------original------");
**	memmove(e + 1, e, 9);
**	for (i = 0; i < 10; i++)
**		printf("[%d]", e[i]);
**	printf("\n");
**	for (i = 0; i < 10; i++)
**		e[i] = i;
**	puts("---------ft----------");
**	ft_memmove(e + 1, e, 9);
**	for (i = 0; i < 10; i++)
**		printf("[%d]", e[i]);
**	printf("\n");
**	puts("------original------");
**	printf("%s\n",memmove(f, g, 0));
**	printf("\n");
**	puts("---------ft----------");
**	printf("%s\n",ft_memmove(m, n, 0));
**	printf("\n");
**	puts("------original------");
**	printf("%s\n",memmove(NULL,NULL, 0));
**	printf("\n");
**	puts("---------ft----------");
**	printf("%s\n",ft_memmove(NULL,NULL, 0));
**	printf("\n");
**	return (0);
**}
*/
