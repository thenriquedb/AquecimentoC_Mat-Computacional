/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 *
 * Exercicio 8: Representação de Polinômio */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int grau;
	int coeficiente;
} monomio;

// Headers
int resolver_polinomio(int x, int n, monomio *polinomio);

int main(int argc, char **argv) {
	int n, opcao, x;

	printf("Quantos monômios vai utilizar: ");
	scanf("%d", &n);

	monomio polinomio[n];

	// Leitura dos monomios
	for (int i = 0; i < n; i++) {
		printf("\n%dº Monômio \n", i + 1);

		printf("Grau: ");
		scanf("%d", &polinomio[i].grau);

		printf("Coeficiente: ");
		scanf("%d", &polinomio[i].coeficiente);
	}

	printf("\nPolinômio inserido: ");
	for (int i = 0; i < n; i++) {
		if (polinomio[i].coeficiente > 0) {
			printf("+(%dx^%d)", polinomio[i].coeficiente, polinomio[i].grau);
		} else {
			printf("-(%dx^%d)", polinomio[i].coeficiente, polinomio[i].grau);
		}
	}

	do {
		printf("Digite 1 para calcular o valor de X ou 2 para encerrar o programa: ");
		scanf("%d", &opcao);

		if (opcao == 1) {
			/* code */
		} else if (opcao == 2) {
			printf("Digite o valor de X: ");
			scanf("%d", &x);
			resolver_polinomio(x, n, polinomio);
		} else {
			printf("Opção invalida. \n");
		}
	} while (opcao != 2);

	return (EXIT_SUCCESS);
}

int resolver_polinomio(int x, int n, monomio *polinomio) {
	int resultado = 0;
	for (int i = 0; i < n; i++) {
		resultado +=
		    pow(x, polinomio[i].grau) * polinomio[i].coeficiente;
	}
	printf("resultado: %d \n\n", resultado);
}
