/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 14:40:26 by shirama           #+#    #+#             */
/*   Updated: 2020/11/20 00:17:53 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;
	int				i;

	i = 0;
	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	while (n--)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/*
**int		main(void)
**{
**	char	s1[] = "Hello";
**	char	s2[] = "Hello world";
**
**	puts("-----input-----");
**	printf("s1 = %s\n", s1);
**	printf("s2 = %s\n", s2);
**	printf("size:%lu\n", sizeof(s1));
**	puts("-----original-----");
**	printf("%d\n", memcmp(s1, s2, sizeof(s1)));
**	puts("--------ft--------");
**	printf("%d\n", ft_memcmp(s1, s2, sizeof(s1)));
**	puts("-----input-----");
**	printf("s1 = %s\n", s1);
**	printf("s2 = %s\n", s2);
**	printf("size:%d\n", 5);
**	puts("-----original-----");
**	printf("%d\n", memcmp(s1, s2, 5));
**	puts("--------ft--------");
**	printf("%d\n", ft_memcmp(s1, s2, 5));
**	puts("-----input-----");
**	printf("s1 = %s\n", s1);
**	printf("s2 = %s\n", s2);
**	printf("size:%d\n", 10);
**	puts("-----original-----");
**	printf("%d\n", memcmp(s1, s2, 3));
**	puts("--------ft--------");
**	printf("%d\n", ft_memcmp(s1, s2, 3));
**	puts("-----input-----");
**	printf("s1 = %s\n", s1);
**	printf("s2 = %s\n", s2);
**	printf("size:%d\n", 0);
**	puts("-----original-----");
**	printf("%d\n", memcmp(s1, s2, 0));
**	puts("--------ft--------");
**	printf("%d\n", ft_memcmp(s1, s2, 0));
**}
*/
