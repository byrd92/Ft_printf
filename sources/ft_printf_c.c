/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_c.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 18:02:01 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/04 15:20:23 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_printf_c(t_printf *p)
{
	char str;
	str = va_arg(p->args, int);
	if (p->flags[MINUS] == 0)
	{
		if (p->width > 0)
			while (--p->width > 0)
				ft_putchar_n(p, ' ');
		ft_putchar_n(p, str);
	}
	else if (p->flags[MINUS] == 1)
	{
		ft_putchar_n(p, str);
		if (p->width > 0)
			while (--p->width > 0)
				ft_putchar_n(p, ' ');
	}
	else
		ft_putchar_n(p, str);
	flagszero(p);
}
