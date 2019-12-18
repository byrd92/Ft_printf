/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:14:51 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 17:27:32 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_swap_n(t_printf *p, int n)
{
	char *aux;

	aux = ft_strdup(&p->print_str[n]);
	free(p->print_str);
	p->print_str = ft_strdup(aux);
	free(aux);
}

void	ft_print_nbr(t_printf *p)
{
	int i;

	i = 0;
	while (p->print_str[i])
		ft_putchar_n(p, p->print_str[i++]);
}

void	ft_manage_width(t_printf *p)
{
	char	c;
	char	*aux;

	c = ' ';
	if (p->flags[ZERO] == 1)
		c = '0';
	if (p->precision >= p->width)
		return ;
	if (p->precision > ft_strlen(p->print_str) && p->print_str[0] != '-')
		p->width -= p->precision;
	else if (p->precision > ft_strlen(p->print_str) && p->print_str[0] == '-')
		p->width -= p->precision + 1;
	else
		p->width -= ft_strlen(p->print_str);
	if (p->print_str[0] == '-' && p->flags[ZERO] == 1)
	{
		ft_putchar_n(p, '-');
		ft_swap_n(p, 1);
	}
	while (p->width-- > 0)
		ft_putchar_n(p, c);
}

void	ft_manage_precision(t_printf *p)
{
	int strlen;

	strlen = ft_strlen(p->print_str);
	if (p->print_str[0] == '-')
	{
		ft_putchar_n(p, '-');
		ft_swap_n(p, 1);
		strlen--;
		p->width--;
	}
	if (p->precision > strlen)
	{
		while (strlen++ < p->precision)
			ft_putchar_n(p, '0');
		ft_print_nbr(p);
	}
	else
		ft_print_nbr(p);
}

void	ft_parse_numbers(t_printf *p)
{
	if (p->flags[ZERO] == 1 && p->flags[DOT] == 1
	&& p->precision < p->width)
		p->flags[ZERO] = 0;
	if (p->flags[MINUS] == 0)
	{
		if (p->width > 0)
			ft_manage_width(p);
		if (p->flags[DOT] == 1)
			ft_manage_precision(p);
		else
			ft_print_nbr(p);
	}
	else if (p->flags[MINUS] == 1)
	{
		p->flags[ZERO] = 0;
		if (p->flags[DOT] == 1)
			ft_manage_precision(p);
		else
			ft_print_nbr(p);
		if (p->width > 0)
			ft_manage_width(p);
	}
	flagszero(p);
}
