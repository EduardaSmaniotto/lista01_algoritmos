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
/*João recebeu seu salário de R$ 1200,00 e precisa pagar duas contas (C1=R$ 200,00 e C2=R$120,00) que
estão atrasadas. Como as contas estão atrasadas, João terá de pagar multa de 2% sobre cada conta. Faça
um algoritmo que calcule e mostre quanto restará do salário do João*/
