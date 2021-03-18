/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/16 23:55:57 by shirama           #+#    #+#             */
/*   Updated: 2020/11/17 14:14:52 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}

/*
**void	func(void *x)
**{
**	char	*a;
**	int		i;
**
**	i = 0;
**	a = (char *)x;
**	while (a[i] != '\0')
**	{
**		a[i] = ft_toupper(a[i]);
**		i++;
**	}
**}
**
**int		main(void)
**{
**	t_list	*l;
**	t_list	*tmp;
**
**	l = NULL;
**	for(int i = 0; i < 10; i++)
**		ft_lstadd_back(&l, ft_lstnew(ft_strdup("foo")));
**	tmp = l;
**	while (l)
**	{
**		printf("%s\n", l->content);
**		l = l->next;
**	}
**	ft_lstiter(tmp, func);
**	while (tmp)
**	{
**		printf("%s\n", tmp->content);
**		tmp = tmp->next;
**	}
**}
*/
