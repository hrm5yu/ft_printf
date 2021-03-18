/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:52:39 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 01:09:31 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}

/*
**int		main(void)
**{
**	printf("original:%d arg:%c\n", isalnum('A'), 'A');
**	printf("ft	:%d arg:%c\n", ft_isalnum('A'), 'A');
**	printf("original:%d arg:%c\n", isalnum('a'), 'a');
**	printf("ft	:%d arg:%c\n", ft_isalnum('a'), 'a');
**	printf("original:%d arg:%c\n", isalnum('1'), '1');
**	printf("ft	:%d arg:%c\n", ft_isalnum('1'), '1');
**	printf("original:%d arg:%c\n", isalnum('*'), '*');
**	printf("ft	:%d arg:%c\n", ft_isalnum('*'), '*');
**	return (0);
**}
*/
