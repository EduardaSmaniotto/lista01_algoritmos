#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, media;
    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);

    media = ((nota1 * 2)+(nota2 * 3)) / (2+3);

    printf("A media ponderada do aluno e: %.2lf.", media);
}
/*Faça um algoritmo que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando
peso 2 para a primeira nota e peso 3 para a segunda nota.*/
