/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 5:  Calculando Logarítmo Natural por Aproximação
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv)
{
	int n; //x = termo a ser calculado, n = quantidade de termos
	double x, ln, erro_relativo;

	printf("Termo a ser calculado: ");
	scanf("%lf", &x);

	printf("Quantidade de termos do somatorio: ");
	scanf("%d", &n);

	ln = x - 1;

	for (int i = 1; i <= n; i++)
	{
		if (i % 2 != 0)
		{
			ln -= pow(x - 1, i + 1) / i + 1;
		}
		else
		{
			ln += pow(x - 1, i + 1) / i + 1;
		}
	}
	
	erro_relativo = (ln - log(x)) / ln;

	printf("LOG por aproximação: %lf \n", ln);
	printf("LOG Correto: %f \n", log(x));
	printf("Erro relativo: %lf \n", erro_relativo);

	return (EXIT_SUCCESS);
}