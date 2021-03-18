/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 22:36:40 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 16:50:35 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char *dest;

	dest = (unsigned char *)s;
	while (n-- > 0)
		*dest++ = '\0';
}

/*
**int		main(void)
**{
**	char	a[15];
**	char	b[15];
**
**	memset(a, 'a', sizeof(a));
**	bzero(a, sizeof(a));
**	memset(b, 'a', sizeof(b));
**	ft_bzero(b, sizeof(b));
**	printf("cmp:%d\n", memcmp(a, b, sizeof(a)));
**
**	return (0);
**}
*/
