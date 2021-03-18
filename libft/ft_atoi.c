/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shirama <shirama@student.42tokyo.jp>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 18:17:58 by shirama           #+#    #+#             */
/*   Updated: 2020/11/26 22:53:46 by shirama          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	space_skip(const char *str, int *i)
{
	while (((str[*i] >= 9 && str[*i] <= 13)
	|| str[*i] == 32) && str[*i] != '\0')
		*i = *i + 1;
}

static void	is_minus(const char *str, int *minus, int *i)
{
	if (str[*i] == '-')
	{
		*minus = 1;
		*i = *i + 1;
	}
	else if (str[*i] == '+')
		*i = *i + 1;
}

int			ft_atoi(const char *str)
{
	unsigned long	sum;
	int				minus;
	int				i;

	i = 0;
	sum = 0;
	minus = 0;
	space_skip(str, &i);
	is_minus(str, &minus, &i);
	while ((str[i] >= '0' && str[i] <= '9') && str[i] != '\0')
	{
		sum += str[i] - '0';
		if (str[i + 1] >= '0' && str[i + 1] <= '9')
			sum *= 10;
		i++;
	}
	if (sum >= (unsigned long)LONG_MAX && minus != 1)
		return (-1);
	else if ((sum > (unsigned long)LONG_MAX) && minus == 1)
		return (0);
	if (minus == 1)
		return ((int)sum * -1);
	return ((int)sum);
}

/*
**int main(void)
**{
**	printf("original atoi	:%d 		arg:\"%s\"\n", atoi("123"), "123");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n", ft_atoi("123"), "123");
**	printf("original atoi	:%d 	arg:\"%s\"\n",
**	 atoi("2147483647"), "2147483647");
**	printf("ft_atoi		:%d 	arg:\"%s\"\n",
**	 ft_atoi("2147483647"), "2147483647");
**	printf("original atoi	:%d 	arg:\"%s\"\n",
**	 atoi("-2147483648"), "-2147483648");
**	printf("ft_atoi		:%d 	arg:\"%s\"\n",
**	 ft_atoi("-2147483648"), "-2147483648");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("9223372036854775807"), "9223372036854775807");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("9223372036854775807"), "9223372036854775807");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("-9223372036854775808"), "-9223372036854775808");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("-9223372036854775808"), "-9223372036854775808");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("92233720368547758070"), "92233720368547758070");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("92233720368547758070"), "92233720368547758070");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("-92233720368547758080"), "-92233720368547758080");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("-92233720368547758080"), "-92233720368547758080");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("\t \t \t 123"), "\\t \\t \\t 123");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("\t \t \t 123"), "\\t \\t \\t 123");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("\t \t \t -123"), "\\t \\t \\t -123");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("\t \t \t -123"), "\\t \\t \\t -123");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("\t \t \t +123"), "\\t \\t \\t +123");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("\t \t \t +123"), "\\t \\t \\t +123");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("\t \t \t 123a123"), "\\t \\t \\t 123a123");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("		123a123"), "\\t \\t \\t 123a123");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi("\0"), "\\0");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi("\0"), "\\0");
**	printf("original atoi	:%d 		arg:\"%s\"\n",
**	 atoi(NULL), "NULL");
**	printf("ft_atoi		:%d 		arg:\"%s\"\n",
**	 ft_atoi(NULL), "NULL");
**	return (0);
**}
*/
