int		main(void)
{
	char a = 'p';
	char b[] = "yo bien y tu";
	int c = 0;
	int num = (unsigned int)-123234;
	int j;
	printf("el numer de caracteres impresos es : %i\n", c );
	j = printf("%u\n",  num);
	printf("el numer de caracteres impresos es : %i\n", j );
	return 0;
}
