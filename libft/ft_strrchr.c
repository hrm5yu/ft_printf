/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 01:55:52 by shirama           #+#    #+#             */
/*   Updated: 2020/11/27 00:45:49 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;

	i = 0;
	while (s[i] != '\0')
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}

/*
**int		main(void)
**{
**	char	a[] = "abcdefghijklmnopqrstuvwxyz";
**	char	b[] = "abcdefghijklmnopqrstuvwxyz";
**	char	c[] = "abcdefghijkl\0mnopqrstuvwxyz";
**
**	puts("-----original-----");
**	printf("%s\n", strrchr(c, 's'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(c, 's'));
**	puts("-----original-----");
**	printf("%s\n", strrchr(a, 'z'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(b, 'z'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(b, 'h'));
**	puts("-----original-----");
**	printf("%s\n", strrchr(a, '\0'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(b, '\0'));
**	puts("-----original-----");
**	printf("%s\n", strrchr(a, '0'));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(b, '0'));
**	puts("-----original-----");
**	printf("%s\n", strrchr(NULL, 0));
**	puts("--------ft--------");
**	printf("%s\n", ft_strrchr(NULL, 0));
**	return (0);
**}
*/
