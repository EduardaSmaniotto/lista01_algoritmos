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
/*Faça um algoritmo que receba dois números, calcule e mostre a divisão do primeiro número pelo segundo.
Sabe-se que o segundo número não pode ser zero, portanto não é necessário se preocupar com validações.*/
