#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantHorasN, quantHorasE;
    printf("Informe a quantidade de horas normais trabalhadas: ");
    scanf("%d", &quantHorasN);
    printf("Informe a quantidade de horas extras trabalhadas: ");
    scanf("%d", &quantHorasE);

    double totalHorasN =  10 * quantHorasN;
    double totalHorasE = 15 * quantHorasE;

    double salarioBruto = totalHorasN + totalHorasE;
    double salarioLiquido = salarioBruto - (salarioBruto*0.1);

    printf("O valor do salario bruto e: %.2lf e o salario liquido e %.2lf.", salarioBruto, salarioLiquido);
}
/*A empresa Hipotheticus paga R$10,00 por hora normal trabalhada, e R$15,00 por hora extra.
Fa�a um algoritmo para calcular e imprimir o sal�rio bruto e o sal�rio l�quido de um determinado funcion�rio. Considere
que o sal�rio l�quido � igual ao sal�rio bruto descontando-se 10% de impostos. */
