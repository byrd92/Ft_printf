/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 16:05:48 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/19 11:31:50 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** Esta función añade una struct_lista(new)
** al final de la estructura **alst)
*/

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list *tmp;

	if (alst != NULL)
	{
		tmp = *alst;
		if (tmp == NULL)
			*alst = new;
		else
		{
			while (tmp->next)
				tmp = tmp->next;
			tmp->next = new;
		}
	}
}
