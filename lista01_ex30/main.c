#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioFixo, vendas, comissao, salarioFinal;
    printf("Informe o salario fixo: ");
    scanf("%lf", &salarioFixo);
    printf("Informe o valor das vendas: ");
    scanf("%lf", &vendas);

    comissao = vendas * 0.04;
    salarioFinal = salarioFixo + comissao;

    printf("A comissao e de: R$%.2lf.\n", comissao);
    printf("O salario final e: R$%.2lf.", salarioFinal);
}
/*Um funcion�rio recebe um sal�rio fixo mais 4% de comiss�o sobre as vendas. Fa�a um algoritmo que receba
o sal�rio fixo de um funcion�rio e o valor de suas vendas, calcule e mostre a comiss�o e o sal�rio final do
funcion�rio.*/
