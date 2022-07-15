#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double raio, altura, volume;
    printf("Informe o raio da caixa de agua: ");
    scanf("%lf", &raio);
    printf("Informe a altura da caixa de agua: ");
    scanf("%lf", &altura);

    volume = 3.14 * pow(raio,2) * altura;

    printf("O volume da caixa de agua e de: %.2lf.", volume);
}
/*Calcule o volume de uma caixa d'água cilíndrica. */
