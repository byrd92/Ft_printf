/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/08 13:20:11 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:34:26 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Indica si el caracter entra dentro de números (0 al 9)
*/

#include "libft.h"

int	ft_isdigit(int c)
{
	return (c <= 57 && c >= 48);
}
