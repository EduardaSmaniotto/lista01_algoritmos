#include <stdio.h>
#include <stdlib.h>

int main()
{

    double peso, novoPeso1, novoPeso2;
    printf("Informe o peso: ");
    scanf("%lf", &peso);

    novoPeso1 = (peso * 0.15) + peso;
    novoPeso2 = peso - (peso * 0.20);

    printf("Se a pessoa engordar 15%% do peso dela, ela ficara com %.2lfkg.\n", novoPeso1);
    printf("Se a pessoa emagrecer 20%% do peso dela, ela ficara com %.2lfkg.", novoPeso2);
}
/*Faça um algoritmo que receba o peso de uma pessoa, calcule e mostre:
a. o novo peso se a pessoa engordar 15% sobre o peso digitado;
b. o novo peso se a pessoa emagrecer 20% sobre o peso digitado */
