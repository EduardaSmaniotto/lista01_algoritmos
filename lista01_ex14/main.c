#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese");

    double raio, area;

    printf("Informe o raio da pizza: ");
    scanf("%lf", &raio);

    area = 3.14 * pow(raio,2);

    printf("A �rea da pizza � de: %.2lf", area);
}
/*Calcule a �rea de uma pizza que possui um raio R (pi=3.14).
A = pi * raio ao quadrado*/
