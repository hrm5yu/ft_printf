/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:07:41 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:22:29 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*tmp;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		tmp = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = tmp;
	}
}

/*
**void	delete(void *content)
**{
**	content = (int *)content;
**}
**
**int		main(void)
**{
**	t_list *l;
**	t_list *tmp;
**
**	l = ft_lstnew(ft_strdup("hello"));
**	ft_lstadd_back(&l, ft_lstnew(ft_strdup("world")));
**	tmp = l;
**	while (l)
**	{
**		printf("%s\n", l->content);
**		l = l->next;
**	}
**	ft_lstclear(&tmp, delete);
**	while (tmp)
**	{
**		printf("%s\n", tmp->content);
**		tmp = tmp->next;
**	}
**}
*/
