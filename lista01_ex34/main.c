#include <stdio.h>
#include <stdlib.h>

int main()
{
    double lado, area;
    printf("Informe o lado do quadrado: ");
    scanf("%lf", &lado);

    area = lado * lado;

    printf("A area do quadrado e de: %.2lf.", area);
}
/*Faça um algoritmo que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado;*/
