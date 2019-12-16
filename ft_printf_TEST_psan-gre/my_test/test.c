/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psan-gre <psan-gre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:49:13 by psan-gre          #+#    #+#             */
/*   Updated: 2019/11/29 17:17:26 by psan-gre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	ft_printf("\n\n--- My Personal Test---\n\n");
	printf("(%i)\n",printf("[  printf ] Test your ideas"));
	printf("(%i)\n",ft_printf("[ft_printf] Test your ideas"));
	ft_printf("\n");
	return (0);
}


