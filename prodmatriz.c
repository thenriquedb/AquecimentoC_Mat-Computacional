/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 14:  Produto matricial
 */

#include <stdio.h>
#include <stdlib.h>

void calcular_produto(int n, int mat1[n][n],int mat2[n][n]);

int main(int argc, char** argv) {
	int n = atoi(argv[1]); // DImensão das matrizes
	int mat1[n][n], mat2[n][n];

	printf("MATRIZ 1 \n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("M[%d][%d]: ",i,j);
			scanf("%d",&mat1[i][j]);
		}
	}

	system("clear");
	printf("MATRIZ 2 \n");
	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			printf("M[%d][%d]: ",i,j);
			scanf("%d",&mat2[i][j]);
		}
	}

	system("clear");

	calcular_produto(n,mat1,mat2);

    return (EXIT_SUCCESS);
}

void calcular_produto(int n, int mat1[n][n],int mat2[n][n]) {
	int prodmatriz[n][n];

	for(int i=0; i<n; i++) {
		for(int j=0; j<n; j++) {
			prodmatriz[i][j] = mat1[i][j] * mat2[i][j];
			printf("%4d",prodmatriz[i][j]);
		}
		printf("\n");
	}
}


