/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:23:39 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 18:42:53 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"



void	ft_putnbr_base(t_printf *p, unsigned int nbr, char *base)
{
	int			size;
	long int	nb;
	char		tmp;
	int			i;

	size = ft_strlen(base);
	i = 0;
	nb = nbr;
	p->print_str = malloc(sizeof(char) * size);
	while (nbr > 0)
	{
		tmp = base[nbr % size];
		p->print_str[i] = tmp;
		nbr = nbr / size;
		i++;
	}
}

void	ft_printf_x(t_printf *p)
{
	unsigned int nbr;

	nbr = va_arg(p->args, unsigned int);
	if (p->print_str != NULL)
		free(p->print_str);
	if (nbr == 0 && !p->width && !p->precision && p->flags[MINUS] == 0)
	{
		ft_putchar_n(p, '0');
		flagszero(p);
		return ;
	}
	if (*p->str == 'X')
	{
		ft_putnbr_base(p, nbr, "0123456789ABCDEF");
	}
	else if (*p->str == 'x')
	{
		ft_putnbr_base(p, nbr, "0123456789abcdef");
	}
	if (nbr == 0)
		p->print_str = ft_strdup("0");
	ft_strrev(p->print_str);
	ft_parse_numbers(p);
}
