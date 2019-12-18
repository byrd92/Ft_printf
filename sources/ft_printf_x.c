/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:23:39 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 17:47:31 by egarcia-         ###   ########.fr       */
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
	if (*p->str == 'X')
		ft_putnbr_base(p, nbr, "0123456789ABCDEF");
	else if (*p->str == 'x')
		ft_putnbr_base(p, nbr, "0123456789abcdef");
	if (nbr == 0)
	{
		free(p->print_str);
		p->print_str = ft_strdup("0");
	}
	if (p->flags[DOT] == 1 && nbr == 0)
	{
		free(p->print_str);
		p->print_str = ft_strdup("");
	}
	ft_strrev(p->print_str);
	ft_parse_numbers(p);
	ft_del(p->print_str);
}
