/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 *
 * Exercicio 9: Derivada de Polinômios */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	int grau;
	int coeficiente;
} monomio;

// Headers
int resolver_polinomio(int x, int n, monomio *polinomio);
void print_polinomio(monomio *poli, int n);
void derivar(monomio *poli, int n);

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

	printf("\nf(x): ");
	print_polinomio(polinomio, n);

	printf("\nf'(x): ");
	derivar(polinomio, n);
	print_polinomio(polinomio, n);

	do {
		printf("\n\nDigite 1 para calcular o valor de X ou 2 para encerrar o programa: ");
		scanf("%d", &opcao);

		if (opcao == 1) {
			printf("\tDigite o valor de X: ");
			scanf("%d", &x);
			printf("\tf'(%d): %d \n", x, resolver_polinomio(x, n, polinomio));
		} else if (opcao != 2) {
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
	return resultado;
}

void print_polinomio(monomio *poli, int n) {
	for (int i = 0; i < n; i++) {
		if (poli[i].coeficiente > 0) {
			printf("+(%dx^%d)", poli[i].coeficiente, poli[i].grau);
		} else {
			printf("-(%dx^%d)", poli[i].coeficiente, poli[i].grau);
		}
	}
}

void derivar(monomio *poli, int n) {
	for (int i = 0; i < n; i++) {
		if (poli[i].grau > 0) {
			poli[i].coeficiente = poli[i].coeficiente * poli[i].grau;
			poli[i].grau = poli[i].grau - 1;
		}
	}
}