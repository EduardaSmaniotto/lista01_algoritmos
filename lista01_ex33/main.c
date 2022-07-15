#include <stdio.h>
#include <stdlib.h>

int main()
{
    double baseMaior, baseMenor, altura, area;
    printf("Informe a base maior do trapezio: ");
    scanf("%lf", &baseMaior);
    printf("Informe a base menor do trapezio: ");
    scanf("%lf", &baseMenor);
    printf("Informe a altura do trapezio: ");
    scanf("%lf", &altura);

    area = (baseMaior+baseMenor) * altura / 2;

    printf("A area do trapezio e de: %.2lf.", area);
}
/*Faça um algoritmo que calcule e mostre a área de um trapézio. Sabe-se que: A = (base maior + base menor)* altura)/2 ;*/
