/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 12:  Ordenação de vetores
 */

#include <stdio.h>
#include <stdlib.h>

// Cabeçalho da função de ordenação
int ordenacao(int *vet, int n); 


int main(int argc, char** argv) {
	int n;

	printf("Tamanho do vetor: ");
	scanf("%d",&n);

	int vetor[n];

	for(int i=0; i<n; i++) {
		printf("V[%d]: ",i);
		scanf("%d", &vetor[i]);
	}

	ordenacao(vetor, n);

    return (EXIT_SUCCESS);
}

int ordenacao(int *vet, int n) {
	int min, temp;

	for(int i = 0; i < n-1; i++) {
		min = i;

		for(int j = i+1; j < n; j++) {
			if(vet[j] < vet[min]) {
				min = j;
			} 
		}

		temp = vet[i];
		vet[i] = vet[min];
		vet[min] = temp;
	}

	printf("\nVetor ordenado: ");
	for(int i =0; i < n; i++) {
		printf("%d",vet[i]);

		if (i + 1 != n) {
			printf(", ");
		}
	}
}

