#include <stdio.h>
#include <stdlib.h>

int main()
{
    double restante, conta1, conta2;

    conta1 = (200*0.02) + 200;
    conta2 = (120*0.02) + 120;

    restante = 1200 - conta1 - conta2;

    printf("O restante do salario de Joao e de: %.2lf.", restante);
}
/*Jo?o recebeu seu sal?rio de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
est?o atrasadas. Como as contas est?o atrasadas, Jo?o ter? de pagar multa de 2% sobre cada conta. Fa?a
um algoritmo que calcule e mostre quanto restar? do sal?rio do Jo?o*/
