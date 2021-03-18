/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 21:19:57 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 01:26:09 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*p;

	p = (char *)malloc(ft_strlen(s1) + 1);
	if (p == NULL)
		return (NULL);
	p = (char *)ft_memcpy(p, s1, ft_strlen(s1) + 1);
	return (p);
}

/*
**int		main(void)
**{
**	puts("-----original-----");
**	printf("%s\n", strdup("hello"));
**	puts("--------ft--------");
**	printf("%s\n", ft_strdup("hello"));
**	puts("-----original-----");
**	printf("%s\n", strdup(NULL));
**	puts("--------ft--------");
**	printf("%s\n", ft_strdup(NULL));
**}
*/
