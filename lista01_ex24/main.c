#include <stdio.h>
#include <stdlib.h>

int main()
{
    double litrosRefresco, litrosAgua, litrosSuco;
    printf("Informe quantos litros de refresco deseja fazer: ");
    scanf("%lf", &litrosRefresco);

    litrosAgua = litrosRefresco * 0.8;
    litrosSuco = litrosRefresco * 0.2;

    printf("A quantidade de agua e de %.2lf litros e de suco e de %.2lf litros.", litrosAgua, litrosSuco);
}
/*Um tonel de refresco é feito com 8 partes de água mineral e 2 partes de suco de maracujá.
Faça um algoritmo para calcular quantos litros de água e
 de suco são necessários para se fazer X litros de refresco (informados pelo usuário).*/




