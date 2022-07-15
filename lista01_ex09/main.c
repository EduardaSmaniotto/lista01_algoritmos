#include <stdio.h>
#include <stdlib.h>

int main()
{
    int quantP, quantM, quantG;

    printf("Informe a quantidade de camisetas P: ");
    scanf("%d", &quantP);
    printf("Informe a quantidade de camisetas M: ");
    scanf("%d", &quantM);
    printf("Informe a quantidade de camisetas G: ");
    scanf("%d", &quantG);

    double valorP, valorM, valorG, total;

    valorP = ((double)quantP) * 10;
    valorM = ((double)quantM) * 12;
    valorG = ((double)quantG) * 15;
    total = valorP + valorM + valorG;

    printf("O valor de camisetas P e: %.2lf\n", valorP);
    printf("O valor de camisetas M e: %.2lf\n", valorM);
    printf("O valor de camisetas G e: %.2lf\n", valorG);
    printf("O total e: %.2lf\n", total);
}

/*Uma fábrica de camisetas produz os tamanhos pequeno, médio e grande, cada uma sendo vendida respectivamente por
10, 12 e 15 reais. Construa um algoritmo em que o usuário forneça a quantidade de camisetas
pequenas, médias e grandes referentes a uma venda, e a máquina informe quanto será o valor arrecadado. */
