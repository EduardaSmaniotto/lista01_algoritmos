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
/*Faça um algoritmo que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule e
mostre a quantidade de salários mínimos que ganha esse funcionário. */

