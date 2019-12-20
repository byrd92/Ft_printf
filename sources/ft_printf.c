/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:23:07 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/20 16:23:45 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void	ft_putchar_n(t_printf *p, char c)
{
	write(1, &c, 1);
	p->count++;
}

int		ft_printf(const char *str, ...)
{
	t_printf	p;

	initzero(&p);
	p.count = 0;
	p.str = (char *)str;
	va_start(p.args, str);
	while (*p.str)
	{
		if (*p.str == '%' && *p.str + 1)
		{
			++p.str;
			ft_checktype(&p);
		}
		else
			ft_putchar_n(&p, *p.str);
		if (*p.str != '\0')
			++p.str;
	}
	va_end(p.args);
	return (p.count);
}
