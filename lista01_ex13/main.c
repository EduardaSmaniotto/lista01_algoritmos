#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe um numero inteiro de ate 3 digitos: ");
    scanf("%d", &num);

    int cen = num/100;
    int sobra = num - (cen*100);

    int dez = sobra/10;
    int uni = sobra - (dez*10);


    printf("Centena = %d\nDezena = %d\nUnidade = %d",cen, dez, uni);
}
/*Ler um número inteiro (assuma até três dígitos) e imprimir a saída da seguinte forma: CENTENA = x
DEZENA = x
UNIDADE = x */

