/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/05 16:19:48 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:50:20 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (size > 1 && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
		size--;
	}
	if (size != 0)
		dest[i] = '\0';
	while (src[i] != '\0')
		i++;
	return (i);
}

/*
**int		main(void)
**{
**	char	a[15];
**	char	b[] = "1234567890";
**
**	puts("-----original-----");
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), NULL, 2);
**	printf("return:%lu dest:\"%s\"\n", strlcpy(NULL, b, 2), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 4);
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(NULL, NULL, 2), a);
**	puts("-----original-----");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%lu\n", sizeof(a), b, strlen(b));
**	printf("return:%lu dest:\"%s\"\n", strlcpy(a, b, 10), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%lu\n", sizeof(a), b, strlen(b));
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(a, b, 10), a);
**	puts("-----original-----");
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 1);
**	printf("return:%lu dest:\"%s\"\n", strlcpy(a, b, 1), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 1);
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(a, b, 1), a);
**	puts("-----original-----");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 2);
**	printf("return:%lu dest:\"%s\"\n", strlcpy(a, b, 2), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 2);
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(a, b, 2), a);
**	puts("-----original-----");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 0);
**	printf("return:%lu dest:\"%s\"\n", strlcpy(a, b, 0), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%d\n", sizeof(a), b, 0);
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(a, b, 0), a);
**	puts("-----original-----");
**	bzero(a, sizeof(a));
**	printf("dest:%s src:\"%s\" size:%d\n", NULL, b, 0);
**	printf("return:%lu dest:\"%s\"\n", strlcpy(NULL, b, 0), NULL);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest:%s src:\"%s\" size:%d\n", NULL, b, 0);
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(NULL, b, 0), NULL);
**	puts("-----original-----");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%lu\n", sizeof(a), NULL, sizeof(a));
**	printf("return:%lu dest:\"%s\"\n", strlcpy(a, NULL, sizeof(a)), a);
**	puts("--------ft--------");
**	bzero(a, sizeof(a));
**	printf("dest_buf:%lu src:\"%s\" size:%lu\n", sizeof(a), b, sizeof(a));
**	printf("return:%lu dest:\"%s\"\n", ft_strlcpy(a, NULL, sizeof(a)), a);
**}
*/
