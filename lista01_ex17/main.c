#include <stdio.h>
#include <stdlib.h>

int main()
{
    double celsius, fahrenheit;
    printf("Informe a temperatura em Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius * 1.8 + 32;

    printf("A temperatura de %.0lf em Fahrenheit e de %.1lf.", celsius, fahrenheit);
}
/*Alguns pa�ses medem temperaturas em graus Celsius, e outros em graus Fahrenheit. Fa�a um algoritmo
para ler uma temperatura Celsius e imprimi-Ia em Fahrenheit (pesquise como fazer este tipo de convers�o). */

