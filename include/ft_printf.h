/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 18:24:11 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/20 16:23:18 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# define ZERO 0
# define MINUS 1
# define DOT 2
# define MULT 3

/*
** ------------ External Headers-----------------
*/
# include <unistd.h>
# include <stdarg.h>
# include "../libft/libft.h"

/*
** ------------ Struct Definition ---------------
*/

typedef	struct			s_printf
{
	int					count;
	va_list				args;
	char				*str;
	char				*print_str;
	int					flags[4];
	int					width;
	int					precision;
}						t_printf;

/*
** --------------- Main Funcion    ----------------
*/

int						ft_printf(const char *s, ...);

/*
** --------------- Manage funcions  ----------------
*/

void					ft_manage_flags(t_printf *p);
void					ft_manage_digits(t_printf *p);
void					ft_checktype(t_printf *p);
void					ft_printf_id(t_printf *p);
void					ft_printf_c(t_printf *p);
void					ft_printf_x(t_printf *p);
void					ft_printf_p(t_printf *p);
/*
** --------------- Parse funcions  ----------------
*/

void					ft_parse_chars(t_printf *p);
void					ft_parse_numbers(t_printf *p);
void					ft_addspace(t_printf *p);
void					ft_addzero(t_printf *p);
void					ft_putchar_precision(t_printf *p);
void					ft_addspace(t_printf *p);

/*
** --------------- print funcions  ----------------
*/

void					ft_putchar_n(t_printf *p, char c);
void					ft_putstr(t_printf *p);
void					ft_print_str(t_printf *p);
void					ft_print_str(t_printf *p);
void					ft_print_nbr(t_printf *p);
void					ft_print_percent(t_printf *p);

/*
** --------------- reset funcions  ----------------
*/

void					ft_del(char *str);
void					flagszero(t_printf *p);
t_printf				*initzero(t_printf *p);

#endif
