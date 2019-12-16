/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:15:56 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:27:29 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Esta función convierte cualquier string en un numero INT
*/

#include "libft.h"

int	ft_atoi(const char *str)
{
	long int	num;
	int			neg;

	num = 0;
	neg = 0;
	while ((*str >= 9 && *str <= 13) || *str == 32)
		str++;
	if (!(*str >= '0' && *str <= '9') && *str != '-' && *str != '+')
		return (0);
	if (*str == '-' || *str == '+')
	{
		if (*str == '-')
			neg = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		num = num * 10 + *str - '0';
		str++;
	}
	if (neg == 1)
		num = num * -1;
	return (num);
}
