/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_id.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/02 15:39:37 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 18:10:32 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_printf_id(t_printf *p)
{
	int		nb;
	int		i;

	i = 0;
	if (*p->str == 'u')
	{
		nb = va_arg(p->args, unsigned int);
		p->print_str = ft_itoa_unsigned(nb);
	}
	else
	{
		nb = va_arg(p->args, int);
		p->print_str = ft_itoa(nb);
	}
	if (p->flags[DOT] == 1 && nb == 0)
	{
		free(p->print_str);
		p->print_str = ft_strdup("");
	}
	ft_parse_numbers(p);
	p->print_str = ft_strdup("");
	ft_del(p->print_str);
}


