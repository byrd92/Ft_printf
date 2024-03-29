/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:22:13 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:34:11 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Indica si el caracter entra dentro de tabla ascii (0 - 127)
** - Returna 1 si es, 0 si no )
*/

#include "libft.h"

int	ft_isascii(int c)
{
	return (c >= 0 && c <= 127);
}
