#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cavalos, ferraduras;
    printf("Informe a quantidade de cavalos:");
    scanf("%d", &cavalos);

    ferraduras = cavalos * 4;
    printf("A quantidade de ferraduras necessarias e: %d", ferraduras);
}

