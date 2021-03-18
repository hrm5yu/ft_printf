/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:28:21 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:50:56 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == '\0' && c == '\0')
		return ((char *)(s + i));
	return (NULL);
}

/*
**int		main(void)
**{
**	char	a[] = "abcdefghijklmnopqrstuvwxyz";
**	char	b[] = "abcdefghijklmnopqrstuvwxyz";
**
**	puts("-----original-----");
**	printf("%s\n", strchr(a, 'h'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strchr(b, 'h'));
**	puts("-----original-----");
**	printf("%s\n", strchr(a, '\0'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strchr(b, '\0'));
**	puts("-----original-----");
**	printf("%s\n", strchr(a, '0'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strchr(b, '0'));
**	puts("-----original-----");
**	printf("%s\n", ft_strchr(NULL, 0));
**	puts("--------ft--------");
**	printf("%s\n", strchr(NULL, 0));
**	return (0);
**}
*/
