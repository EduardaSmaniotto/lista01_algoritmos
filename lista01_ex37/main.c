#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Informe um numero: ");
    scanf("%d", &num);

    printf("A tabuada de %d:\n%d * 1 = %d\n%d * 2 = %d\n%d * 3 = %d\n%d * 4 = %d\n%d * 5 = %d\n%d * 6 = %d\n"
           "%d * 7 = %d\n%d * 8 = %d\n%d * 9 = %d\n%d * 10 = %d", num, num, num*1, num, num*2, num, num*3, num, num*4,
           num, num*5, num, num*6, num, num*7, num, num*8, num, num*9, num, num*10);
}
/*Faça um algoritmo que calcule e mostre a tabuada de um número digitado pelo usuário. */
