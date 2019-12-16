/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mem_test.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psan-gre <psan-gre@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/13 12:49:13 by psan-gre          #+#    #+#             */
/*   Updated: 2019/11/28 11:07:13 by psan-gre         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	char *str;
	int *null;

	str = "hey muy buenas";
	null = NULL;
	ft_printf("\n\n---Memory Test---\n\n");
	ft_printf("char *str;\nint *null;\n\nstr = \"hey muy buenas\";\nnull = NULL;\n");
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%p (str): [%p]\n", str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%p (str): [%p]\n", str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%p (&str): [%p]\n", &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%p (&str): [%p]\n", &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%p (null): [%p]\n", null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%p (null): [%p]\n", null));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%*p (15, str): [%*p]\n",15, str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%*p (15, str): [%*p]\n",15, str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%*p (15, &str): [%*p]\n",15, &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (15, null): [%*p]\n", 15, null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%*p (15, null): [%*p]\n", 15, null));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%*p (4, str): [%*p]\n",4, str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%*p (4, str): [%*p]\n",4, str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%*p (4, &str): [%*p]\n",4, &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (2, null): [%*p]\n", 2, null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%*p (2, null): [%*p]\n", 2, null));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%*p (-15, str): [%*p]\n",-15, str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%*p (-15, str): [%*p]\n",-15, str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%*p (-15, &str): [%*p]\n",-15, &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%*p (-15, null): [%*p]\n", -15, null));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%.*p (15, str): [%.*p](?)\n",15, str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%.*p (15, str): [%.*p](?)\n",15, str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%.*p (15, &str): [%.*p](?)\n",15, &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%.*p (15, null): [%.*p](?)\n", 15, null));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero %%.*p (-15, str): [%.*p](?)\n",-15, str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero a puntero %%.*p (-15, &str): [%.*p](?)\n",-15, &str));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null));
	printf("(%i)\n",ft_printf("[ft_printf] Puntero nulo %%.*p (-15, null): [%.*p](?)\n", -15, null));
	ft_printf("\n");
	return (0);
}
