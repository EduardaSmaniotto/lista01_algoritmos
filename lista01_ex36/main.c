#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioMinimo, salario;
    int resultado;
    printf("Informe o valor do salario minimo: ");
    scanf("%lf", &salarioMinimo);
    printf("Informe o valor do salario do funcionario: ");
    scanf("%lf", &salario);

    resultado = (int)salario/salarioMinimo;

    printf("A quantidade de salarios minimos recebidos pelo funcionario e de: %d.", resultado);
}
/*Fa�a um algoritmo que receba o valor do sal�rio m�nimo e o valor do sal�rio de um funcion�rio, calcule e
mostre a quantidade de sal�rios m�nimos que ganha esse funcion�rio. */

