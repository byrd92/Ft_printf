/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:18:48 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/19 11:38:32 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

char		*ft_putnbr_base_p(long unsigned int nb, char *base)
{
	int		i;
	int		size;
	char	*mem;
	char	tmp;

	i = 0;
	size = ft_strlen(base);
	mem = malloc(sizeof(char) * size);
	while (nb > 0)
	{
		tmp = base[nb % size];
		mem[i] = tmp;
		nb = nb / size;
		i++;
	}
	if (nb == 0)
		mem[i++] = 0;
	mem[i] = '\0';
	return (mem);
}

void		ft_parse_memory_minus(t_printf *p)
{
	int		i;
	char	*aux;

	ft_putchar_n(p, '0');
	ft_putchar_n(p, 'x');
	aux = ft_strdup(&p->print_str[2]);
	free(p->print_str);
	p->print_str = ft_strdup(aux);
	free(aux);
	i = ft_strlen(p->print_str);
	while (p->precision-- > i)
		ft_putchar_n(p, '0');
	ft_print_nbr(p);
}

void		ft_printf_p(t_printf *p)
{
	long unsigned int	nbr;
	char				*conv;
	char				*aux;

	conv = "0123456789abcdef";
	nbr = va_arg(p->args, long unsigned int);
	if (!nbr && p->flags[DOT] == 1)
		p->print_str = ft_strdup("x0");
	else if (nbr == '0' || !nbr)
		p->print_str = ft_strjoin("0", "x0");
	else if (p->flags[DOT] == 1 && p->precision == 0)
		p->print_str = ft_strdup("x0");
	else
	{
		aux = ft_putnbr_base_p(nbr, conv);
		p->print_str = ft_strjoin(aux, "x0");
		free(aux);
	}
	ft_strrev(p->print_str);
	if (p->flags[DOT] == 1 && p->precision > ft_strlen(p->print_str))
		ft_parse_memory_minus(p);
	else
		ft_parse_numbers(p);
	ft_del(p->print_str);
}
