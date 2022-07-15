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
/*Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um algoritmo que receba
o salário fixo de um funcionário e o valor de suas vendas, calcule e mostre a comissão e o salário final do
funcionário.*/
