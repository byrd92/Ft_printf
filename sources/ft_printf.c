/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:23:07 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 16:15:29 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

int		ft_printf(const char *str, ...)
{
	t_printf	p;

	initzero(&p);
	p.count = 0;
	p.str = (char *)str;
	va_start(p.args, str);
	while (*p.str)
	{
		if (*p.str == '%')
		{
			++p.str;
			ft_checktype(&p);
			//free (p.print_str);
			if (*p.str == '%')
				ft_putchar_n(&p, '%');
		}
		else
			ft_putchar_n(&p, *p.str);
		++p.str;
	}
	va_end(p.args);
	return (p.count);
}
