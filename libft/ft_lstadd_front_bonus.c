/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 14:10:57 by egarcia-          #+#    #+#             */
/*   Updated: 2019/11/25 13:39:19 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* 
**esta función añade una lista al principio de la estructura de listas.
*/

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
