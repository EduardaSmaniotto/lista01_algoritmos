#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, num3, mult;
    printf("Informe um numero: ");
    scanf("%lf", &num1);
    printf("Informe um numero: ");
    scanf("%lf", &num2);
    printf("Informe um numero: ");
    scanf("%lf", &num3);

    mult = num1 * num2 * num3;
    printf("A multiplicacao dos 3 numeros e de: %.2lf", mult);

}
/*Fa�a um algoritmo que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros. */
