/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 6:  Sequência de Fibonacci
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char **argv)
{
	int a = 0, b = 1, temp, n;

	// n-esimo número que deseja calcular
	n = atoi(argv[1]);

	if (n == 0)
	{
		printf("0 \n");
	}
	else if (n == 1)
	{
		printf("1 \n");
	}
	else
	{
		for (int i = 0; i < n; i++)
		{
			temp = a + b;
			a = b;
			b = temp;
			printf("%d\n", b);
		}
	}

	return (EXIT_SUCCESS);
}
