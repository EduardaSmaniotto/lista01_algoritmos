#include <stdio.h>
#include <stdlib.h>

int main()
{
    int um, cinco, dez, vinte, cinq, real;
    printf("Informe o total de moedas de 1 centavo: ");
    scanf("%d", &um);
    printf("Informe o total de moedas de 5 centavos: ");
    scanf("%d", &cinco);
    printf("Informe o total de moedas de 10 centavos: ");
    scanf("%d", &dez);
    printf("Informe o total de moedas de 25 centavos: ");
    scanf("%d", &vinte);
    printf("Informe o total de moedas de 50 centavos: ");
    scanf("%d", &cinq);
    printf("Informe o total de moedas de 1 real: ");
    scanf("%d", &real);

    double total = (double)um*0.01 + (double)cinco*0.05 + (double)dez*0.1 + (double)vinte*0.25 + (double)cinq*0.5 + (double)real*1;
    /*3 moedas de 1 centavo == 0.03
    2 moedas de cinco === 0.10
    5 moedas de 10 === 0.50
    6 moedas de 25 == 1.25
    4 moedas de 50 == 2.00
    5 moedas de 1 real == 5.00
    8,88*/
    printf("O total e de: %.2lf", total);

}
/*Pedrinho tem um cofrinho com muitas moedas, e deseja saber quantos reais conseguiu poupar. Faça um
algoritmo para ler a quantidade de cada tipo de moeda, e imprimir o valor total economizado, em reais.
Considere que existam moedas de 1, 5, 10, 25 e 50 centavos, e ainda moedas de 1 real. Não havendo moeda de
um tipo, a quantidade respectiva é zero. */
