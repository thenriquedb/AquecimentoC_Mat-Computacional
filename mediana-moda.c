/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 13:  Cálculo da Mediana e Moda
 */

#include <stdio.h>
#include <stdlib.h>

// Headers
float mediana(float *vet, int n); 
float moda(float *vet, int n); 
float* ordenar_vetor(float *vet, int n);


int main(int argc, char** argv) {
	int n;

	printf("Quantidade de números: ");
	scanf("%d", &n);

	float list[n];

	for(int i = 0;i < n; i++) {
		printf("%dº Elemento: ",i+1);
		scanf("%f", &list[i]);
	}

	ordenar_vetor(list,n);

	printf("\nMediana: %.2f \n",mediana(list,n));
	moda(list, n);

    return (EXIT_SUCCESS);
}

float* ordenar_vetor(float *vet, int n) {
	int min;
	float temp;
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

	return vet;
}

float mediana(float *vet, int n) {
	int min, temp;


	// Caso a quantidade de elementos seja par
	if(n % 2 == 0) {
		return (vet[n/2] + vet[(n/2)-1])/2;
	} 
	else {
		return vet[(n/2)];
	}
}

float moda(float *vet, int n) {
	int cont,pos,cont_total=0;
	float moda;

	for(int i = 0; i < n; i++) {
		cont = 1;
		moda = vet[i];

		for(int j = 0; j < n; j++) {
			if (i != j && vet[i] == vet[j]) {
				cont++;
			}
		}

		if (cont > cont_total) {
			moda = vet[i];
			cont_total = cont;
		}
	}

	if(cont_total != 1) {
		printf("\nModa: %.2f \nAparições: %d \n",moda, cont_total);
	} else {
		printf("Não há moda. \n");
	}
}


