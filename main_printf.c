/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:21:54 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/16 19:20:59 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/ft_printf.h"

int		main(void)
{
	char a = 'p';
	char b[] = "hola";
	int c = 0;
	int num = -1526;
	int j;
 	c = ft_printf("mi-printf : |%10.*i|\n", 7 , num);
	printf("el numero de caracteres impresos es : %i\n", c );
	j = printf("su-printf : |%10.*i|\n", 7,  num);
	printf("el numero de caracteres impresos es : %i\n", j );
	return 0;
}
