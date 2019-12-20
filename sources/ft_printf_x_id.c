/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_x_id.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/12 12:23:39 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/20 16:23:57 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

static int	num_length(unsigned int n, int b)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		n /= b;
		i++;
	}
	return (i);
}

int			putnbr(unsigned int nb, char *base, char *str, int l)
{
	int	b;

	b = ft_strlen(base);
	if (l == 0)
	{
		str[l] = base[nb % b];
		return (0);
	}
	else
	{
		str[l] = base[nb % b];
		return (putnbr(nb / b, base, str, --l));
	}
}

char		*ft_itoa_base(unsigned int nbr, char *base)
{
	int		b;
	char	*str;
	int		l;

	b = ft_strlen(base);
	l = num_length(nbr, b);
	if (!(str = malloc(sizeof(char) * l + 1)))
		return (0);
	str[l] = '\0';
	putnbr(nbr, base, str, l - 1);
	return (str);
}

void		ft_printf_x(t_printf *p)
{
	unsigned int nbr;

	nbr = va_arg(p->args, unsigned int);
	if (nbr == 0 && p->flags[DOT] == 0)
		p->print_str = ft_strdup("0");
	else if (p->flags[DOT] == 1 && nbr == 0)
		p->print_str = ft_strdup("");
	else if (*p->str == 'X')
		p->print_str = ft_itoa_base(nbr, "0123456789ABCDEF");
	else if (*p->str == 'x')
		p->print_str = ft_itoa_base(nbr, "0123456789abcdef");
	ft_parse_numbers(p);
	ft_del(p->print_str);
}

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
