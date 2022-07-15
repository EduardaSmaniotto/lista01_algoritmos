#include <stdio.h>
#include <stdlib.h>

int main()
{
    double peso, novoPeso;
    printf("Informe o peso: ");
    scanf("%lf", &peso);

    novoPeso = peso * 1000;

    printf("O peso em gramas e de: %.0lf.", novoPeso);
}
/*Faça um algoritmo que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.*/

