/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 17:18:48 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 19:16:18 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"
/*
char	*ft_go_base_p(long unsigned int nbr, char *base, int size)
{
	char tmp;
	char *mem;
	int i;

	i = 0;
	mem = malloc(sizeof(char) * size);
	while (nbr > 0)
	{
		tmp = base[nbr % size];
		mem[i] = tmp;
		nbr = nbr / size;
		i++;
	}
	return (mem);
}
*/
char 	*ft_putnbr_base_p(long unsigned int nb, char *base)
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

void	ft_parse_memory_minus (t_printf *p)
{
	int i;
	int k;

	k = 0;
	ft_putchar_n(p, '0');
	p->print_str++;
	ft_putchar_n(p, 'x');
	p->print_str++;
	i = ft_strlen(p->print_str);
	while (p->precision-- > i)
		ft_putchar_n(p, '0');
	ft_print_nbr(p);
}

void	ft_printf_p(t_printf *p)
{
	long unsigned int nbr;
	char *conv;

	conv = "0123456789abcdef";
	nbr = va_arg(p->args, long unsigned int);
	if (p->print_str != NULL)
		free(p->print_str);
	if (nbr == 0)
		p->print_str = ft_strjoin("0", "x0");
	else
		p->print_str = ft_strjoin(ft_putnbr_base_p(nbr, conv), "x0");
	ft_strrev(p->print_str);
	if (p->flags[DOT] == 1 && p->precision > ft_strlen(p->print_str))
		ft_parse_memory_minus(p);
	else
		ft_parse_numbers(p);
}
