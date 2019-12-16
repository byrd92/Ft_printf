/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:49:48 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:33:28 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Indica si el caracter entra dentro de cáracteres alpha. Returna 1 si esta o 0 si no.
*/

#include "libft.h"

int	ft_isalpha(int c)
{
	return ((c >= 65 && c <= 90) ||
	(c >= 97 && c <= 122));
}
