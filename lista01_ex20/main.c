#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x;
    double n;
    printf("Informe a quantidade de blusas produzidas: ");
    scanf("%d", &x);
    printf("Informe a quantidade gasta de novelos: ");
    scanf("%lf", &n);

    double resultado = n / (double)x;

    printf("A quantidade de novelos gasto por blusa e de: %.1lf", resultado);

}
/*Uma confec��o produz X blusas de l� e para isto gasta uma certa quantidade de novelos. Fa�a um algoritmo
para calcular quantos novelos de l� ela gasta por blusa */
