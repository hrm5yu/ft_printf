/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 20:00:59 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 01:10:25 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isprint(int c)
{
	return (c >= 32 && c <= 126);
}

/*
**int		main(void)
**{
**	int		i;
**
**	puts("------------------");
**	for(i = 0; i <= 127; i++)
**	{
**		printf("original:%d arg:%c\n", isprint(i), i);
**		printf("ft	:%d arg:%c\n", ft_isprint(i), i);
**		puts("------------------");
**	}
**	return (0);
**}
*/
