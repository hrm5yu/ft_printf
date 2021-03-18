/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 17:31:32 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:53:53 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dest, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	n;
	size_t	dlen;
	size_t	slen;

	dlen = ft_strlen(dest);
	slen = ft_strlen(src);
	i = 0;
	if (dlen >= dstsize)
		return (dstsize + slen);
	n = dstsize - dlen - 1;
	while (src != NULL && n-- && src[i] != '\0')
	{
		dest[dlen + i] = src[i];
		i++;
	}
	dest[dlen + i] = '\0';
	return (dlen + slen);
}

/*
**int		main(void)
**{
**	char	a[] = "1234";
**	char	b[] = "567890";
**	char	c[20];
**
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", a, b, 0);
**	printf("return:%lu\n", strlcat(a, b, 0));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", a, b, 0);
**	printf("return:%lu\n", ft_strlcat(a, b, 0));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", a, b, 2);
**	printf("return:%lu\n", strlcat(a, b, 2));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", a, b, 2);
**	printf("return:%lu\n", ft_strlcat(a, b, 2));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", a, b, 3);
**	printf("return:%lu\n", strlcat(a, b, 3));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", a, b, 3);
**	printf("return:%lu\n", ft_strlcat(a, b, 3));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", a, b, 4);
**	printf("return:%lu\n", strlcat(a, b, 4));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", a, b, 4);
**	printf("return:%lu\n", ft_strlcat(a, b, 4));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", a, b, 5);
**	printf("return:%lu\n", strlcat(a, b, 5));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", a, b, 5);
**	printf("return:%lu\n", ft_strlcat(a, b, 5));
**	printf("dest:%s\n", a);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", c, b, 10);
**	printf("return:%lu\n", strlcat(c, b, 10));
**	printf("dest:%s\n", c);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", c, b, 10);
**	printf("return:%lu\n", strlcat(c, b, 10));
**	printf("dest:%s\n", c);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", c, b, 11);
**	printf("return:%lu\n", strlcat(c, b, 11));
**	printf("dest:%s\n", c);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", c, b, 11);
**	printf("return:%lu\n", strlcat(c, b, 11));
**	printf("dest:%s\n", c);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", c, b, 12);
**	printf("return:%lu\n", strlcat(c, b, 12));
**	printf("dest:%s\n", c);
**	bzero(c, sizeof(c));
**	memset(c, 'a', 5);
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", c, b, 12);
**	printf("return:%lu\n", strlcat(c, b, 12));
**	printf("dest:%s\n", c);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%lu\n", a, NULL, sizeof(a));
**	printf("return:%lu\n", ft_strlcat(a, NULL, sizeof(a)));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%lu\n", a, NULL, sizeof(a));
**	printf("return:%lu\n", ft_strlcat(a, NULL, sizeof(a)));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("-----original-----");
**	printf("%s + %s size:%d\n", NULL, b, 0);
**	printf("return:%lu\n", strlcat(NULL, b, 0));
**	printf("dest:%s\n", a);
**	memcpy(a, "1234", sizeof(a));
**	puts("--------ft--------");
**	printf("%s + %s size:%d\n", NULL, b, 0);
**	printf("return:%lu\n", ft_strlcat(NULL, b, 0));
**	printf("dest:%s\n", a);
**}
*/
