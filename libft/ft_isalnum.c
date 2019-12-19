/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/12 13:49:37 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/19 11:32:36 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Indica si el caracter entra dentro
** de alphanumérico en ascii (letras o numeros)
*/

#include "libft.h"

int		ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
