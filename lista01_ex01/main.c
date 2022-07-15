#include <stdio.h>
#include <stdlib.h>

int main()
{
    double comprimento, largura;
    printf("informe o comprimento do terreno: \n");
    scanf("%lf", &comprimento);
    printf("Informe a largura do terreno: \n");
    scanf("%lf", &largura);

    double area = comprimento * largura;

    printf("A area do terreno e: %.2lf", area);
}
