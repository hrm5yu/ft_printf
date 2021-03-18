/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:19:58 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:52:45 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	if (s != NULL)
	{
		i = ft_strlen(s);
		write(fd, s, i);
	}
}

/*
**int		main(void)
**{
**	char	a[] = "hello";
**
**	ft_putstr_fd(a, 1);
**	printf("\n");
**}
*/
