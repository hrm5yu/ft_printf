/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 00:02:57 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:26:07 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*n;
	t_list	*new_list;

	if (!lst || !f)
		return (NULL);
	if (!(new_list = ft_lstnew(f(lst->content))))
		return (NULL);
	lst = lst->next;
	while (lst != NULL)
	{
		if (!(n = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, n);
		lst = lst->next;
	}
	return (new_list);
}

/*
**void	*func(void *x)
**{
**	char	*a;
**	int		i;
**
**	i = 0;
**	a = ft_strdup((char *)x);
**	while (a[i] != '\0')
**	{
**		a[i] = ft_toupper(a[i]);
**		i++;
**	}
**	return (a);
**}
**
**void	delete(void *x)
**{
**	free(x);
**}
**
**int		main(void)
**{
**	t_list	*l;
**	t_list	*new_list;
**	t_list	*tmp;
**
**	l = NULL;
**	for(int i = 0; i < 10; i++)
**		ft_lstadd_back(&l, ft_lstnew("hoge"));
**	tmp = l;
**	while(l)
**	{
**		printf("%s\n", l->content);
**		l = l->next;
**	}
**	new_list = ft_lstmap(tmp, func, delete);
**	while (new_list)
**	{
**		printf("%s\n", new_list->content);
**		new_list = new_list->next;
**	}
**}
*/
