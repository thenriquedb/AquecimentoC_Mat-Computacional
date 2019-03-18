/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 3: Norma de um vetor
 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char** argv) {
	int x,y,z;
	
	x = atoi(argv[1]);
	y = atoi(argv[2]);
	z = atoi(argv[3]);
	
	float norma = sqrt((pow(x,2)+ pow(y,2)+ pow(z,2)));
	printf("Norma: %.3f \n",norma );

    return (EXIT_SUCCESS);
}

