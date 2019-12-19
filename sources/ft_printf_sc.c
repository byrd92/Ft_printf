/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_sc.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:28:51 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/19 11:28:56 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		ft_putstr(t_printf *p)
{
	char *str;
	char *aux;

	if (p->flags[MINUS] == 1)
		p->flags[ZERO] = 0;
	aux = va_arg(p->args, char *);
	if (!aux)
		p->print_str = ft_strdup("(null)");
	else
		p->print_str = ft_strdup(aux);
	if (p->flags[DOT] == 1 && p->precision == 0 && p->width == 0)
	{
		ft_del(p->print_str);
		return ;
	}
	else
		ft_addflags(p);
	free(p->print_str);
}

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

void		ft_print_percent(t_printf *p)
{
	p->print_str = ft_strdup("%");
	if (p->flags[MINUS] == 1)
		p->flags[ZERO] = 0;
	ft_parse_numbers(p);
	ft_del(p->print_str);
}
