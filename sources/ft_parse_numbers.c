/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 19:14:51 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 19:24:43 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"


void	ft_print_nbr(t_printf *p)
{
	int i;

	i = 0;
	while (p->print_str[i])
		ft_putchar_n(p, p->print_str[i++]);
}


void	ft_manage_width(t_printf *p)
{
	char 	c;

	if (p->flags[ZERO] == 1)
		c = '0';
	else
		c = ' ';
	if (p->precision >= p->width)
		return ;
	/*if (p->print_str[0] == '-' && p->flags[ZERO] == 1)
	{
		ft_putchar_n(p, '-');
		p->print_str++;
	}
	*/
	//else if (p->print_str[0] == '-' && p->flags[ZERO] == 0 && p->flags[DOT] == 1)
		//p->width--;
	if (p->precision > ft_strlen(p->print_str) && p->print_str[0] != '-')
		p->width -= p->precision;
	else if (p->precision > ft_strlen(p->print_str) && p->print_str[0] == '-')
		p->width -= p->precision + 1;
	else
		p->width -= ft_strlen(p->print_str);
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
		p->print_str++;
		strlen--;
		p->width--;
	}
	//printf("\n %i \n", strlen);
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
	if (p->flags[MINUS] == 0)
	{
		if (p->width > 0)
		{
			//if (p->print_str[0] == '-')
			//	p->width--;
			ft_manage_width(p);
		}
		if (p->flags[DOT] == 1)
			ft_manage_precision(p);
		else
			ft_print_nbr(p);
	}
	else if (p->flags[MINUS] == 1)
	{
		if (p->flags[DOT] == 1)
			ft_manage_precision(p);
		else
			ft_print_nbr(p);
		if (p->width > 0)
			ft_manage_width(p);
	}
	flagszero(p);
}
