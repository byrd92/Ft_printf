/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_initzero.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 14:28:48 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/12 13:15:03 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

t_printf	*initzero(t_printf *p)
{
	p->len = 0;
	p->flags[ZERO] = 0;
	p->flags[MINUS] = 0;
	p->flags[DOT] = 0;
	p->flags[MULT] = 0;
	p->str = NULL;
	p->print_str = NULL;
	p->index = 0;
	p->width = 0;
	p->precision = 0;
	return (p);
}

void	flagszero(t_printf *p)
{
	p->flags[ZERO] = 0;
	p->flags[MINUS] = 0;
	p->flags[DOT] = 0;
	p->flags[MULT] = 0;
	p->width = 0;
	p->precision = 0;
}
