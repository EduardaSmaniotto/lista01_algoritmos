#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, precoNovo;
    printf("Informe o preco do produto: ");
    scanf("%lf", &preco);

    precoNovo = preco - (preco*0.1);

    printf("O preco novo do produto e: %.2lf.", precoNovo);
}
/*Fa�a um algoritmo que receba o pre�o de um produto, calcule e mostre o novo pre�o, sabendo-se que este
sofreu um desconto de 10%. */
