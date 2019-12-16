/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_checktype.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/30 17:09:36 by byrd              #+#    #+#             */
/*   Updated: 2019/12/16 17:41:41 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void		ft_checktype(t_printf *p)
{
	while ((strchr("-*0.", *p->str)) || ft_isdigit(*p->str))
	{
		//printf("\nstr:%s", p->str);
		if (*p->str == '-' || *p->str == '*' || *p->str == '0' || *p->str == '.')
			ft_manage_flags(p);
		else if (ft_isdigit(*p->str))
		{	
			ft_manage_digits(p);
			while (ft_isdigit(*p->str))
				p->str++;
			p->str--;
		}
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
}

void		ft_manage_flags(t_printf *p)
{
	int i;

	i = 0;
	if (p->str[i] == '-')
		p->flags[MINUS] = 1;
	else if (p->str[i] == '0')
		p->flags[ZERO] = 1;
	else if (p->str[i] == '*')
	{
		if (p->str[i - 1] == '.')
		{
			p->precision = va_arg(p->args, int);
			p->flags[DOT] = 1;
			if (p->precision < 0)
				p->precision = 0;
		}
		else
		{
			p->width = va_arg(p->args, int);
			if (p->width < 0)
			{
				p->width = p->width * -1;
				p->flags[MINUS] = 1;
			}		
		//	printf("\nwidth :|%i|\n", p->width);
		}
	}
}
void		ft_manage_digits(t_printf *p)
{
	int i;

	i = 0;
	if (p->str[i - 1] == '.')
		{
			if (p->precision  == 0)
				p->precision = ft_atoi(&p->str[i]);
			p->flags[DOT] = 1;
			if (p->precision < 0)
				p->precision = 0;
			//printf("\nprecision :|%i|\n", p->precision);
		}
	else if (p->width == 0)
	{
		p->width = ft_atoi(&p->str[i]);
		if (p->width < 0)
		{
			p->width = p->width * -1;
			p->flags[MINUS] = 1;
		}
		//printf("\nwidth :|%i|\n", p->width);
	}
}
