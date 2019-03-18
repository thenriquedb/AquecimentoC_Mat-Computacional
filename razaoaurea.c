/*
 * Nome: Thiago Henrique Domingues Botelho
 * Matricula: 0041149
 * Curso: Ciência da computação
 * 
 * Exercicio 7:  Cálculando a Razão Áurea por Fibonacci
 */

#include <stdio.h>
#include <stdlib.h>

#define RAZAO 1.618033988749894848

float fibonacci(int n);

int main(int argc, char **argv)
{

    float a = 0, b = 1, temp;
    double razao_aurea, margem_erro, erro_absoluto;

    printf("Margem de erro: ");
    scanf("%lf",&margem_erro);

    do
    {
        temp = a + b;
        a = b;
        b = temp;

        razao_aurea = b / a;
        erro_absoluto = RAZAO - razao_aurea;

        // Modulo do erro absouluto
        if (erro_absoluto < 0)
        {
            erro_absoluto *= -1;
        }

    } while (erro_absoluto >= margem_erro);

    printf("A: %.0f B: %.0f \n", a, b);
    printf("Razão aurea: %lf \n", razao_aurea);
    printf("Erro absoluto: %lf \n\n", erro_absoluto);

    return (EXIT_SUCCESS);
}