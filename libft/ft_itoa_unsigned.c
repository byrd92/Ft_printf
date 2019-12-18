/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_unsigned.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 10:42:12 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 16:54:43 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_size(long int n)
{
	int size;

	size = 0;
	while (n >= 10)
	{
		n = n / 10;
		size++;
	}
	size++;
	return (size);
}

static char	*ft_intoa(char *str, long int n, int size)
{
	int i;

	i = 0;
	while (n >= 10)
	{
		str[i++] = n % 10 + '0';
		n = n / 10;
	}
	str[i] = n + '0';
	str[size] = 0;
	return (str);
}

char		*ft_itoa_unsigned(unsigned int n)
{
	char		*str;
	int			size;

	size = ft_count_size(n);
	if ((str = (char *)malloc((size + 1) * sizeof(char))) == 0)
		return (0);
	str = ft_intoa(str, n, size);
	ft_strrev(str);
	return (str);
}
