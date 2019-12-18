/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_printf.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: egarcia- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/29 17:21:54 by egarcia-          #+#    #+#             */
/*   Updated: 2019/12/18 18:11:01 by egarcia-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "include/ft_printf.h"

int		main(void)
{
	char a = 'p';
	char b[] = "hola";
	int c = 0;
	int num = 0;
	int j;
	int int_max = 2147483647;
	int int_min = -2147483648;
	
 	c = ft_printf("mi-printf : |%i|\n",int_min);
	printf("el numero de caracteres impresos es : %i\n", c );
	j = printf("su-printf : |%3.9i|\n",1234);
	printf("el numero de caracteres impresos es : %i\n", j );
	printf("%d\n", int_max); 
   	printf("%d", int_min); 
	
	while (1)
	{
		ft_printf("programa bloqueado\n");
	}
	
	return 0;
}
