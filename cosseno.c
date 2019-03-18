/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 4:  Calculando Cosseno por Aproximação
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592654

int calcular_fatorial(int n);
double grau_to_radian(double grau);

int main(int argc, char** argv) {
	int n,k;
	double cos,radiano;


	printf("Quantidade de termos: ");
	scanf("%d",&n);

	for(int i=0; i<=90; i++) {
		radiano = grau_to_radian(i);
		cos = 1;
		k = 2;
		for(int j=0; j<n; j++) {
			if(j % 2 == 0) {
				cos -= pow(radiano, k)/calcular_fatorial(k);
			} else {
				cos += pow(radiano, k)/calcular_fatorial(k);
			}
			k += 2;
		}
		printf("Cos de %d: %lf radianos \n",i, cos);
	}

    return (EXIT_SUCCESS);
}

int calcular_fatorial(int n) {
	int fat = 1;

	for(int i = n; i > 1; i--) {
		fat *= i;
	}

	return fat;
}

double grau_to_radian(double grau) {
	return grau*PI / 180;
}