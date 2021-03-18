/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 12:37:45 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:12:17 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t		i;
	size_t		needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	i = 0;
	while (haystack[i] != '\0' && i < len)
	{
		if (needle_len + i > len)
			break ;
		if (0 == ft_strncmp(haystack + i, needle, needle_len))
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char	*a = "0123456789";
**
**	puts("-----original-----");
**	printf("%s\n", strnstr(a, "4", 10));
**	puts("------ft------");
**	printf("%s\n", ft_strnstr(a, "4", 10));
**}
**
**int		main(void)
**{
**	char	a[] = "1234567890";
**	//test0
**	printf("\ntest0:haystack:%s\n", "NULL");
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(a, "567", 6), "567", 6);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(a, "567", 6), "567", 6);
**	//test1
**	printf("\ntest1:haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, "567", sizeof(a)), "567", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, "567", sizeof(a)), "567", sizeof(a));
**	//test2
**	printf("\ntest2:haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, "abc", sizeof(a)), "abc", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, "abc", sizeof(a)), "abc", sizeof(a));
**	//test3
**	printf("\ntest3:haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(a, "567", 0), "567", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(a, "567", 0), "567", 0);
**	//test3.5
**	printf("\ntest3.5:haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(a, NULL, 0), NULL, 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(a, NULL, 0), NULL, 0);
**	//test4
**	printf("\ntest4:haystack:%s\n", "NULL");
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(NULL, "567", 0), "567", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(NULL, "567", 0), "567", 0);
**	//test4.5
**	printf("\ntest4.5:5haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(a, NULL, 0), "NULL", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(a, NULL, 0), "NULL", 0);
**	//test5
**	printf("\ntest5:5haystack:%s\n", "NULL");
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	strnstr(NULL, NULL, 0), "NULL", 0);
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%d\n",
**	ft_strnstr(NULL, NULL, 0), "NULL", 0);
**	//test6
**	printf("\ntest6:haystack:%s\n", a);
**	puts("-----original-----");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	strnstr(a, NULL, sizeof(a)), "NULL", sizeof(a));
**	puts("--------ft--------");
**	printf("return:%s needle:\"%s\"size:%lu\n",
**	ft_strnstr(a, NULL, sizeof(a)), "NULL", sizeof(a));
**	return (0);
**}
*/
