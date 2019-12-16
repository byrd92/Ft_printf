#include <stdio.h>
int	ft_printf(const char *str, ...);

int main()
{
	write(1, "\n\n--- String-Char Test ---\n\n", 28);
	printf("(%i)\n",printf("[  printf ] %%\n"));
	printf("(%i)\n",ft_printf("[ft_printf] %%\n"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%s (\"hola\"):  [%s]\n", "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%s (\"hola\"):  [%s]\n", "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%c (\'c\'):  [%c](?)\n",'c'));
	printf("(%i)\n",ft_printf("[ft_printf] %%c (\'c\'):  [%c](?)\n",'c'));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (8, 8, \"hola\"):  [%*.*s]\n", 8, 8, "hola"));
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%*.*c (8, 8, \'c\'):  [%*.*c](?)\n", 8, 8, 'c'));//CASO EXTRAÑO
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*c (8, 8, \'c\'):  [%*.*c](?)\n", 8, 8, 'c'));//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (8, 10, \"hola\"):  [%*.*s]\n", 8, 10, "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%*.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (-10, 8, \"hola\"): [%*.*s]\n", -10, 8, "hola"));
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%*.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c'));//CASO EXTRAÑO
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*c (-10, 8, \'c\'): [%*.*c](?)\n", -10, 8, 'c'));//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%*.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (8, -10, \"hola\"): [%*.*s]\n", 8, -10, "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (8, 0, \"hola\"):   [%*.*s]\n", 8, 0, "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%*.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.*s (8, 1, \"hola\"):   [%*.*s]\n", 8, 1, "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%*.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%*.10s (2, \"hola\"):     [%*.10s]\n", 2, "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%10.10s (\"hola\"):      [%10.10s]\n", "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%10.10s (\"hola\"):      [%10.10s]\n", "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%10s (\"hola\"):      [%10s]\n", "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%10s (\"hola\"):      [%10s]\n", "hola"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%.10s (\"hola\"):      [%.10s]\n", "hola"));
	printf("(%i)\n",ft_printf("[ft_printf] %%.10s (\"hola\"):      [%.10s]\n", "hola"));
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%.10c (\'c\'):      [%.10c](?)\n", 'c'));//CASO EXTRAÑO
	printf("(%i)\n",ft_printf("[ft_printf] %%.10c (\'c\'):      [%.10c](?)\n", 'c'));//CASO EXTRAÑO
	ft_printf("\n");
	//
	printf("(%i)\n",printf("[  printf ] %%10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal"));
	printf("(%i)\n",ft_printf("[ft_printf] %%10.*s (7, \"hola que tal\"):    [%10.*s]\n", 7, "hola que tal"));
	ft_printf("\n");
	printf("(%i)\n",printf("[  printf ] %%-10.*s (7, \"hola que tal\"):    [%-10.*s]\n", 7, "hola que tal"));
	printf("(%i)\n",ft_printf("[ft_printf] %%-10.*s (7, \"hola que tal\"):    [%-10.*s]\n", 7, "hola que tal"));
	ft_printf("\n");
	return (0);
}



