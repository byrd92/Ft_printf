/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:50:10 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 16:54:51 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Esta función convierte un numero INT ha una cadena STRING
*/

#include "libft.h"

static int	ft_count_size(long int n)
{
	int size;

	size = 0;
	if (n < 0)
		n = n * -1;
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

char		*ft_itoa(int n)
{
	char		*str;
	int			size;

	size = ft_count_size(n);
	if (n == -2147483648)
	{
		str = "-2147483648";
		return (str);
	}
	if (n < 0)
		size++;
	if ((str = (char *)malloc((size + 1) * sizeof(char))) == 0)
		return (0);
	if (n < 0)
	{
		str[size - 1] = '-';
		n = n * -1;
	}
	str = ft_intoa(str, n, size);
	ft_strrev(str);
	return (str);
}
