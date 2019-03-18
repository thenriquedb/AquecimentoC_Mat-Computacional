/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 1: Raíz Quadrada Por Aproximação
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	float a,x,erro,diferenca,r;

	printf("Raiz a ser calculada: ");
	scanf("%f",&a);
    
    printf("Valor de x: ");
    scanf("%f",&x);

    printf("Margem de erro: ");
    scanf("%f",&erro);

    do{
    	r = ((a/x)+x)*0.5;
    	diferenca = r - x;
    	x--;
    } while(diferenca <= erro);


    printf("R: %f \n",r);

    return (EXIT_SUCCESS);
}

