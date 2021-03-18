/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/15 23:58:00 by shirama           #+#    #+#             */
/*   Updated: 2020/11/22 15:15:58 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_lstsize(t_list *lst)
{
	int		count;
	t_list	*p;

	p = lst;
	count = 0;
	while (p != NULL)
	{
		count++;
		p = p->next;
	}
	return (count);
}

/*
**int		main(void)
**{
**	t_list	*lst;
**	t_list	*tmp;
**
**	lst = NULL;
**	for(int	i = 0; i < 5; i++)
**	{
**		ft_lstadd_back(&lst, ft_lstnew("world"));
**	}
**	tmp = lst;
**	printf("%d\n", ft_lstsize(lst));
**	while (tmp)
**	{
**		printf("%s\n", tmp->content);
**		tmp = tmp->next;
**	}
**}
*/
