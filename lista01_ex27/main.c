#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num1, num2, div;
    printf("Informe um numero: ");
    scanf("%lf", &num1);
    printf("Informe um numero: ");
    scanf("%lf", &num2);
    div = num1 / num2;
    printf("A divisao do primeiro pelo segundo e de: %.2lf", div);
}
/*Fa�a um algoritmo que receba dois n�meros, calcule e mostre a divis�o do primeiro n�mero pelo segundo.
Sabe-se que o segundo n�mero n�o pode ser zero, portanto n�o � necess�rio se preocupar com valida��es.*/
