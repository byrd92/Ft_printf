/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:39:37 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/13 14:22:14 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_addflags_numbers(t_printf *p);

void	ft_printf_id(t_printf *p)
{
	int		nb;
	char	*nbstr;
	int		i;

	i = 0;
	p->index = 0;
	p->print_str = NULL;
	if (*p->str == 'u')
	{
		nb = va_arg(p->args, unsigned int);
		p->print_str = ft_strdup(ft_itoa_unsigned(nb));
	}
	else
	{
		nb = va_arg(p->args, int);
		p->print_str = ft_strdup(ft_itoa(nb));
	}
	ft_parse_numbers(p);
	//while (p->print_str[i])
	//	ft_putchar_n(p, p->print_str[i++]);
}


