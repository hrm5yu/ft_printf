/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/10 13:58:19 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 23:52:29 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;
	size_t	flag;

	flag = 0;
	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c && flag == 0)
		{
			count++;
			flag = 1;
		}
		else if (s[i] == c)
			flag = 0;
		i++;
	}
	return (count);
}

static size_t	count_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i] != '\0')
		i++;
	return (i);
}

static void		*a_free(char **p)
{
	size_t	i;

	i = 0;
	while (p[i] != NULL)
		free(p[i++]);
	free(p);
	return (NULL);
}

static void		set_word(char *p, char const *s, char c)
{
	size_t	i;

	i = 0;
	while (*s != c && *s != '\0')
		p[i++] = *s++;
	p[i] = '\0';
}

char			**ft_split(char const *s, char c)
{
	char	**p;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (!(p = (char **)malloc(sizeof(char *) * count_words(s, c) + 1)))
		return (NULL);
	while (*s != '\0')
	{
		while (*s == c && *s != '\0')
			s++;
		if (*s != c && *s != '\0')
		{
			if (!(p[i] = (char *)malloc(sizeof(char) * count_len(s, c) + 1)))
				return (a_free(p));
			set_word(p[i], s, c);
			s = s + count_len(s, c);
			i++;
		}
	}
	p[i] = NULL;
	return (p);
}

/*
**int		main(void)
**{
**	char	**p;
**	int		i;
**	char	*s = "      split       this for   me  !";
**	char	*exp[6] = {"split", "this", "for", "me", "!", NULL};
**
**
**	i = 0;
**	if(!(p = ft_split(s, ' ')))
**		return (0);
**	while (p[i] != NULL)
**	{
**		printf("%s\n", p[i]);
**		printf("%d\n", strcmp(p[i], *(exp + i)));
**		i++;
**	}
**	printf("%s\n", p[i]);
**	char **pp = ft_split("\0", '\0');
**	printf("%s\n", *pp);
**	return (0);
**}
*/
