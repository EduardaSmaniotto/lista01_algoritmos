#include <stdio.h>
#include <stdlib.h>

int main()
{
    double valor;
    printf("Informe o valor da conta: ");
    scanf("%lf", &valor);

    int valorCarlos = valor / 3;
    int valorAndre = valor / 3;
    double somaCarlosEAndre = valorCarlos + valorAndre;
    double valorFelipe = valor - (somaCarlosEAndre);

    printf("O valor que Carlos pagara e R$%d.00, Andre R$%d.00 e Felipe R$%.2lf.", valorCarlos, valorAndre, valorFelipe);
}
/*Três amigos, Carlos, André e Felipe. decidiram rachar igualmente a conta de um bar. Faça um algoritmo para
ler o valor total da conta e imprimir quanto cada um deve pagar, mas faça com que Carlos e André não paguem
centavos. Ex: uma conta de R$101,53 resulta em R$33,00 para Carlos, R$33,00 para André e R$35,53
para Felipe*/
