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
/*Entrar com o dia e o m�s de uma data e informar quantos dias se passaram desde o in�cio do ano. Esque�a
a quest�o dos anos bissextos e considere sempre que um m�s possui 30 dias.*/
