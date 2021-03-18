/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 13:22:17 by shirama           #+#    #+#             */
/*   Updated: 2020/11/27 00:26:19 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	j;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = start;
	if (i >= ft_strlen(s))
	{
		if (!(p = (char *)malloc(sizeof(char))))
			return (NULL);
		*p = '\0';
		return (p);
	}
	j = 0;
	while (s[i++] != '\0' && j < len)
		j++;
	if (!(p = (char *)malloc(j * sizeof(char) + 1)))
		return (NULL);
	j = 0;
	while (s[start] != '\0' && j < len)
		p[j++] = s[start++];
	p[j] = '\0';
	return (p);
}

/*
**int		main(void)
**{
**	char	a[] = "0123456789";
**	char	*p;
**
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 2);
**	printf("len:%d\n", 2);
**	printf("return:%s\n", ft_substr(a, 2, 2));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 8);
**	printf("len:%d\n", 8);
**	printf("return:%s\n", ft_substr(a, 8, 8));
**	printf("\n");
**	printf("s:%s\n", "NULL");
**	printf("start:%d\n", 8);
**	printf("len:%d\n", 8);
**	printf("return:%s\n", ft_substr(NULL, 8, 8));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 10);
**	printf("len:%d\n", 8);
**	printf("return:%s\n", ft_substr(a, 10, 8));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 1);
**	printf("len:%d\n", 0);
**	printf("return:%s\n", ft_substr(a, 1, 0));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 8);
**	printf("len:%d\n", -10);
**	printf("return:%s\n", ft_substr(a, 8, -10));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 0);
**	printf("len:%d\n", 0);
**	printf("return:%s\n", ft_substr(a, 0, 0));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 15);
**	printf("len:%d\n", 15);
**	printf("return:%s\n", ft_substr(a, 15, 15));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", -1);
**	printf("len:%d\n", 10);
**	printf("return:%s\n", ft_substr(a, -1, 10));
**	printf("\n");
**	printf("s:%s\n", a);
**	printf("start:%d\n", 1);
**	printf("len:%d\n", 2);
**	p = ft_substr(a, 1, 2);
**	printf("return:%s\n", p);
**	for (int i = 0; i < 10; i++)
**		write(1, &p[i], 1);
**	printf("\n");
**	printf("s:%s\n", "");
**	printf("start:%d\n", 0);
**	printf("len:%d\n", 0);
**	printf("return:%s\n", ft_substr(NULL, 0, 0));
**	printf("\n");
**	return (0);
**}
*/
