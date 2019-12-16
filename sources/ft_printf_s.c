/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_s.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 19:28:51 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/12 19:09:46 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/ft_printf.h"

void		ft_putstr(t_printf *p)
{
	char *str;
	//if (p->print_str != NULL)
	//	free(p->print_str);
	
	p->print_str = ft_strdup(va_arg(p->args, char *));
	ft_addflags(p);
}
