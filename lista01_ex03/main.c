#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paes, broas;
    printf("Informe a quantidade de paes: ");
    scanf("%d", &paes);
    printf("Informe a quantidade de broas: ");
    scanf("%d", &broas);

    double total, valorPaes, valorBroas, poupanca;
    valorPaes = 0.12 * paes;
    valorBroas = 1.5 * broas;
    total = ((double)valorPaes) + ((double)valorBroas);
    poupanca = total * 0.1;

    printf("O total arrecadado foi de: R$ %.2lf e deve guardar R$ %.2lf na poupanca.", total, poupanca);
}
/*A padaria Hotp�o vende uma certa quantidade de p�es franceses e uma quantidade de broas a cada dia.
Cada p�ozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos p�es e broas (juntos), e quanto deve guardar numa conta de poupan�a (10% do total arrecadado).
Voc� foi contratado para fazer os c�lculos para o dono. Com base nestes fatos, fa�a um algoritmo
para ler as quantidades de p�es e de broas, e depois calcular os dados solicitados. */
