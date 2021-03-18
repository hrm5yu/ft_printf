/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:30:24 by shirama           #+#    #+#             */
/*   Updated: 2020/11/23 01:31:37 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst == NULL || new == NULL)
		return ;
	if (*lst)
		new->next = *lst;
	*lst = new;
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
**	printf("%s\n", y->content);
**	ft_lstadd_front(&x, y);
**	z = y->next;
**	printf("%s\n", x->content);
**	printf("%s\n", z->content);
**}
*/
