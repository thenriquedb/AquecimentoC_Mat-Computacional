/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 11:  Média e Variância Amostral
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calcular_variancia_amostral(int *vet, int nobservacoes,float media);

int main(int argc, char** argv) {
	int n, sum=0;
	float media;

	printf("Número de observações: ");
	scanf("%d",&n);

	int valores[n];

	for(int i=0; i<n; i++) {
		printf("%dº número: ",i+1 );
		scanf("%d",&valores[i]);
		sum += valores[i];
	}

	media = sum/n;
	printf("Média: %.2f \n", media);
	printf("Variância amostral: %.2f \n",calcular_variancia_amostral(valores, n, media));
	
    return (EXIT_SUCCESS);
}

float calcular_variancia_amostral(int *vet, int nobservacoes,float media) {
	int sum;

	for(int i=0; i<nobservacoes; i++) {
		sum += pow((vet[i]-media),2);
	}

	return sum/nobservacoes;
}

