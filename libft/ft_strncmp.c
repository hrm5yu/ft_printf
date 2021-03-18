/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:16:56 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:49:54 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while (n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			break ;
		n--;
		i++;
	}
	if (!n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

/*
**int		main(void)
**{
**	char	a[] = "hello";
**	char	b[] = "hello world";
**
**	puts("-----input-----");
**	printf("s1 = %s\n", a);
**	printf("s2 = %s\n", b);
**	puts("-----original-----");
**	printf("return:%d\n", strncmp(a, b, sizeof(a) - 1));
**	puts("--------ft--------");
**	printf("return:%d\n", ft_strncmp(a, b, sizeof(a) - 1));
**	puts("-----input-----");
**	printf("s1 = %s\n", a);
**	printf("s2 = %s\n", b);
**	puts("-----original-----");
**	printf("return:%d\n", strncmp(a, b, sizeof(a)));
**	puts("--------ft--------");
**	printf("return:%d\n", ft_strncmp(a, b, sizeof(a)));
**	puts("-----input-----");
**	printf("s1 = %s\n", NULL);
**	printf("s2 = %s\n", NULL);
**	puts("-----original-----");
**	printf("return:%d\n", strncmp(NULL, NULL, 0));
**	puts("--------ft--------");
**	printf("return:%d\n", ft_strncmp(NULL, NULL, 0));
**	puts("-----input-----");
**	printf("s1 = %s\n", a);
**	printf("s2 = %s\n", NULL);
**	puts("-----original-----");
**	printf("return:%d\n", strncmp(a, NULL, sizeof(a)));
**	puts("--------ft--------");
**	printf("return:%d\n", ft_strncmp(a, NULL, sizeof(a)));
**	puts("-----input-----");
**	printf("s1 = %s\n", NULL);
**	printf("s2 = %s\n", b);
**	puts("-----original-----");
**	printf("return:%d\n", strncmp(NULL, b, 0));
**	puts("--------ft--------");
**	printf("return:%d\n", ft_strncmp(NULL, b, 0));
**}
*/
