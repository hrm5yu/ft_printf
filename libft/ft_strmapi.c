/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/14 00:10:31 by shirama           #+#    #+#             */
/*   Updated: 2020/11/15 17:28:23 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;

	if (s == NULL || f == NULL)
		return (NULL);
	p = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

/*
**char	func(unsigned int i, char c)
**{
**	i = (unsigned int)i;
**	return ((char)ft_toupper((int)c));
**}
**
**int		main(void)
**{
**	printf("%s\n", ft_strmapi("Hello World", func));
**	printf("%s\n", ft_strmapi(NULL, func));
**}
*/
