/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 14:03:58 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:53:41 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*p;
	size_t	len;
	size_t	i;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	if (s1 == NULL)
		return ((char *)s2);
	else if (s2 == NULL)
		return ((char *)s1);
	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (*s1 != '\0')
		p[i++] = *s1++;
	while (*s2 != '\0')
		p[i++] = *s2++;
	p[i] = '\0';
	return (p);
}

/*
**int		main(void)
**{
**	char	a[] = "hello";
**	char	b[] = " world";
**	char	c[] = "hello world";
**	char	*d;
**	char	*e;
**	char	*g;
**
**	d = ft_strjoin(a, b);
**	printf("%s\n", d);
**	printf("%d\n", memcmp(c, d, sizeof(c)));
**	e = ft_strjoin(a, NULL);
**	printf("%s\n", e);
**	g = ft_strjoin(NULL, b);
**	printf("%s\n", g);
**	printf("%s\n", ft_strjoin(NULL, NULL));
**	return (0);
**}
*/
