/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:10:13 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 00:57:29 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;

	if (!(new = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}

/*
**int		main(void)
**{
**	char	a[] = "hello";
**	char	b[] = "world";
**	t_list	*x;
**	t_list	*y;
**	t_list	*z;
**
**	x = ft_lstnew(a);
**	printf("%s\n", x->content);
**	y = ft_lstnew(b);
**	ft_lstadd_front(&x, y);
**	z = y->next;
**	printf("%s\n", x->content);
**}
*/
