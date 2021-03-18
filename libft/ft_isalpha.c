/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 19:47:38 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 17:19:06 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_isalpha(int c)
{
	return ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'));
}

/*
**int		main(void)
**{
**	printf("original:%d arg:%c\n", isalpha('A'), 'A');
**	printf("ft	:%d arg:%c\n", ft_isalpha('A'), 'A');
**	printf("original:%d arg:%c\n", isalpha('a'), 'a');
**	printf("ft	:%d arg:%c\n", ft_isalpha('a'), 'a');
**	printf("original:%d arg:%c\n", isalpha('*'), '*');
**	printf("ft	:%d arg:%c\n", ft_isalpha('*'), '*');
**	return (0);
**}
*/
