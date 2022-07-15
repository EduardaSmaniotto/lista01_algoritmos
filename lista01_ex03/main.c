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
/*A padaria Hotpão vende uma certa quantidade de pães franceses e uma quantidade de broas a cada dia.
Cada pãozinho custa R$ 0,12 e a broa custa R$ 1,50. Ao final do dia, o dono quer saber quanto arrecadou
com a venda dos pães e broas (juntos), e quanto deve guardar numa conta de poupança (10% do total arrecadado).
Você foi contratado para fazer os cálculos para o dono. Com base nestes fatos, faça um algoritmo
para ler as quantidades de pães e de broas, e depois calcular os dados solicitados. */
