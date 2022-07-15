#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[20];
    int idade, dias;
    printf("Informe o nome: ");
    scanf("%s", &nome);
    printf("Informe a idade: ");
    scanf("%d", &idade);

    dias = idade * 365;

    printf("%s, voce ja viveu %d dias de vida", nome, dias);
}


