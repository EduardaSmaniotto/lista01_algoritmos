#include <stdio.h>
#include <stdlib.h>

int main()
{
    double peso, valor;
    printf("Informe o peso do prato em kg: ");
    scanf("%lf", &peso);

    valor = peso * 12;

    printf("O valor a pagar e: %.2lf ", valor);
}
/*O restaurante a quilo Bem-Bão cobra R$12,00 por cada quilo de refeição. Escreva um algoritmo que leia o
peso do prato montado pelo cliente (em quilos) e imprima o valor a pagar. Assuma que a balança já desconte
o peso do prato. */
