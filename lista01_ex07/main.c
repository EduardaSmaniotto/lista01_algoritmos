#include <stdio.h>
#include <stdlib.h>

int main()
{
    int dia, mes, diasPassaram;
    printf("Informe o dia: ");
    scanf("%d", &dia);
    printf("Informe o mes: ");
    scanf("%d", &mes);

    if(dia>30)
        printf("Digite um dia ate 30!");

    else {
        diasPassaram = (mes-1) * 30 + dia;
        printf("Se passaram %d dias desde o inicio do ano.", diasPassaram);
    }
}
/*Entrar com o dia e o mês de uma data e informar quantos dias se passaram desde o início do ano. Esqueça
a questão dos anos bissextos e considere sempre que um mês possui 30 dias.*/
