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
/*Um tonel de refresco � feito com 8 partes de �gua mineral e 2 partes de suco de maracuj�.
Fa�a um algoritmo para calcular quantos litros de �gua e
 de suco s�o necess�rios para se fazer X litros de refresco (informados pelo usu�rio).*/




