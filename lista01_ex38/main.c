#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano, anoAtual;
    printf("Informe o ano de nascimento: ");
    scanf("%d", &ano);
    printf("Informe o ano atual: ");
    scanf("%d", &anoAtual);

    int idadeAnos, idadeMeses, idadeDias, idadeSemanas;

    idadeAnos = anoAtual - ano;
    idadeMeses = (anoAtual - ano) * 12;
    idadeDias = (anoAtual - ano) * 365;
    idadeSemanas = (anoAtual - ano) * 48;

    printf("A idade dessa pessoa em anos e de: %d;\nA idade dessa pessoa em meses e: %d;\n"
           "A idade dessa pessoa em dias: %d;\nA idade em semanas: %d.", idadeAnos, idadeMeses, idadeDias, idadeSemanas);

}
/*Faça um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a. a idade dessa pessoa em anos;
b. a idade dessa pessoa em meses;
c. a idade dessa pessoa em dias
d. a idade dessa pessoa em semanas*/
