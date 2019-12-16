/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 15:57:29 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/22 14:41:55 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int		i;
	unsigned char		*ptr;
	unsigned const char	*ptrs;

	i = 0;
	ptr = dst;
	ptrs = src;
	if (ptr || ptrs)
	{
		while (n-- > 0)
		{
			ptr[i] = ptrs[i];
			i++;
		}
		return (ptr);
	}
	return (0);
}
