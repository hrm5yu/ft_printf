/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 16:02:00 by shirama           #+#    #+#             */
/*   Updated: 2020/11/23 00:02:16 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void*))
{
	if (!lst)
		return ;
	if (del)
		del(lst->content);
	free(lst);
}

/*
**void	delete(void *content)
**{
**	free(content);
**}
**
**int		main(void)
**{
**	t_list	*l;
**
**	l = ft_lstnew(ft_strdup("foo"));
**	printf("%s\n", l->content);
**	ft_lstdelone(l, delete);
**	puts("-----\"ft_lstdelone\"-----");
**	if (l != NULL)
**		printf("%s\n", l->content);
**}
*/
