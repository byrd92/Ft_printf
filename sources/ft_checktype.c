/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:09:36 by byrd              #+#    #+#             */
/*   Updated: 2019/12/18 13:08:35 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_checktype(t_printf *p)
{
	while ((strchr("-*0.", *p->str)) || ft_isdigit(*p->str))
	{
		ft_manage_flags(p);
		p->str++;
	}
	if (*p->str == 's')
		ft_putstr(p);
	else if (*p->str == 'i' || *p->str == 'd' || *p->str == 'u')
		ft_printf_id(p);
	else if (*p->str == 'c')
		ft_printf_c(p);
	else if (*p->str == 'X' || *p->str == 'x')
		ft_printf_x(p);
	else if (*p->str == 'p')
		ft_printf_p(p);
	else if (*p->str == '%')
		ft_print_percent(p);
}

void		ft_manage_mult(t_printf *p)
{
	if (p->width == 0 && p->flags[DOT] == 0)
	{
		p->width = va_arg(p->args, int);
		if (p->width < 0)
		{
			p->width *= -1;
			p->flags[MINUS] = 1;
		}
	}
	else if (p->flags[DOT] == 1)
	{
		p->precision = va_arg(p->args, int);
		if (p->precision < 0)
		{
			p->precision = 0;
			p->flags[DOT] = 0;
		}
	}
}

void		ft_manage_flags(t_printf *p)
{
	if (*p->str == '-')
		p->flags[MINUS] = 1;
	else if (*p->str == '0' && p->width < 1)
		p->flags[ZERO] = 1;
	else if (*p->str == '.')
		p->flags[DOT] = 1;
	else if (ft_isdigit(*p->str) && p->flags[DOT] == 0)
		p->width = (p->width * 10) + (*p->str - '0');
	else if (ft_isdigit(*p->str) && p->flags[DOT] == 1)
		p->precision = (p->precision * 10) + (*p->str - '0');
	else if (*p->str == '*')
		ft_manage_mult(p);
}


