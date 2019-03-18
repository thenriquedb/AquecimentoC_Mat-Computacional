/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 *
 * Exercicio 10: Integral de Polinômio */

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct {
	float grau;
	float coeficiente;
} monomio;

// Headers
float resolver_polinomio(int a, int b, int n, monomio *polinomio);
void print_polinomio(monomio *poli, int n);
void integral(monomio *poli, int n);

int main(int argc, char **argv) {
	int n, opcao, x, a, b;

	printf("Quantos monômios vai utilizar: ");
	scanf("%d", &n);

	monomio polinomio[n];

	// Leitura dos monomios
	for (int i = 0; i < n; i++) {
		printf("\n%dº Monômio \n", i + 1);

		printf("Grau: ");
		scanf("%f", &polinomio[i].grau);

		printf("Coeficiente: ");
		scanf("%f", &polinomio[i].coeficiente);
	}

	printf("\nf(x): ");
	print_polinomio(polinomio, n);

	printf("\n∫(x): ");
	integral(polinomio, n);
	print_polinomio(polinomio, n);

	do {
		printf("\n\nDigite 1 para calcular o valor de X ou 2 para encerrar o programa: ");
		scanf("%d", &opcao);

		if (opcao == 1) {
			printf("\tDigite o valor de a: ");
			scanf("%d", &a);

			printf("\tDigite o valor de b: ");
			scanf("%d", &b);

			printf("\t∫[%d,%d] = %.2f \n", a, b, resolver_polinomio(a, b, n, polinomio));
		} else if (opcao != 2) {
			printf("Opção invalida. \n");
		}
	} while (opcao != 2);

	return (EXIT_SUCCESS);
}

float resolver_polinomio(int a, int b, int n, monomio *polinomio) {
	float resultado_a = 0, resultado_b = 0;

	for (int i = 0; i < n; i++) {
		resultado_a += pow(a, polinomio[i].grau) * polinomio[i].coeficiente;
	}

	for (int i = 0; i < n; i++) {
		resultado_b += pow(b, polinomio[i].grau) * polinomio[i].coeficiente;
	}

	return resultado_b - resultado_a;
}

void print_polinomio(monomio *poli, int n) {
	for (int i = 0; i < n; i++) {
		if (poli[i].coeficiente > 0) {
			printf("+(%.1fx^%.0f)", poli[i].coeficiente, poli[i].grau);
		} else {
			printf("-(%.1fx^%.0f)", poli[i].coeficiente, poli[i].grau);
		}
	}
}

void integral(monomio *poli, int n) {
	for (int i = 0; i < n; i++) {
		if (poli[i].grau >= 0) {
			poli[i].grau = poli[i].grau + 1;
			poli[i].coeficiente = poli[i].coeficiente / poli[i].grau;
		}
	}
}
