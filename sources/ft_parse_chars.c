/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_chars.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:05:00 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/19 11:28:25 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_addflags(t_printf *p)
{
	if (p->flags[MINUS] == 0)
	{
		if (p->flags[ZERO] == 1 && p->flags[DOT] == 0)
			ft_addzero(p);
		else if (p->width > 0)
			ft_addspace(p);
		ft_print_str(p);
	}
	else if (p->flags[MINUS] == 1)
	{
		ft_print_str(p);
		if (p->flags[ZERO] == 1 && p->flags[DOT] == 0)
			ft_addzero(p);
		else if (p->flags[ZERO] == 0 && p->width > 0)
			ft_addspace(p);
	}
	flagszero(p);
}

void	ft_addzero(t_printf *p)
{
	int i;
	int j;

	i = 0;
	j = ft_strlen(p->print_str);
	while (i < p->width - j + p->precision)
	{
		ft_putchar_n(p, '0');
		i++;
	}
}

void	ft_addspace(t_printf *p)
{
	int i;
	int j;
	int k;

	i = 0;
	j = ft_strlen(p->print_str);
	if (p->precision < j && p->flags[DOT] == 1 && p->precision != 0)
		k = p->precision;
	else if (strcmp(p->print_str, "(null)") > 0
	&& p->flags[DOT] == 1 && p->precision == 0)
		k = 0;
	else if (strcmp(p->print_str, "") > 0
	&& p->flags[DOT] == 1 && p->precision == 0)
		k = 0;
	else
		k = j;
	while (i++ < p->width - k)
		ft_putchar_n(p, ' ');
}

void	ft_putchar_precision(t_printf *p)
{
	int j;
	int k;

	j = 0;
	k = p->precision;
	while (k-- > 0 && p->print_str[j])
		ft_putchar_n(p, p->print_str[j++]);
}

void	ft_print_str(t_printf *p)
{
	int i;

	i = 0;
	if (p->flags[DOT] == 1)
		ft_putchar_precision(p);
	else
		while (p->print_str[i])
			ft_putchar_n(p, p->print_str[i++]);
}
