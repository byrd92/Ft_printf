/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_toprint.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/04 12:05:00 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 16:28:03 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putchar_n(t_printf *p, char c)
{
	write(1, &c, 1);
	p->count++;
	p->index++;
}

void	ft_addflags(t_printf *p)
{
	int i;

	i = 0;
	if (p->flags[MINUS] == 0)
	{
		if (p->flags[ZERO] == 1 && p->precision == 0)
			ft_addzero(p);
		else if (p->width > 0)
			ft_addspace(p);
		ft_print_str(p);
	}
	else if (p->flags[MINUS] == 1)
	{
		ft_print_str(p);
		if (p->flags[ZERO] == 1 && p->precision == 0)
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
	int k;

	i = 0;
	j = ft_strlen(p->print_str);
	k = j;
	while (i < p->width - k + p->precision)
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

	if (p->precision < j && p->flags[DOT] == 1)
		k = p->precision;
	else
		k = j;
	while (i++ < p->width - k)
		ft_putchar_n(p, ' ');
}

void	ft_putchar_precision(t_printf *p)
{
	int i;
	int j;
	int k;

	j = 0;
	i = ft_strlen(p->print_str);
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

