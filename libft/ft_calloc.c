/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:46:24 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:30:37 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Función que crea un malloc y lo llena de ceros con ft_bzero 
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void *ptr;

	if ((ptr = malloc(count * size)) == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
