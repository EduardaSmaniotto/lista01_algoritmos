#include <stdio.h>
#include <stdlib.h>

int main()
{
    double nota1, nota2, nota3, media;
    printf("Informe a primeira nota: ");
    scanf("%lf", &nota1);
    printf("Informe a segunda nota: ");
    scanf("%lf", &nota2);
    printf("Informe a terceira nota: ");
    scanf("%lf", &nota3);

    media = ((nota1 * 1)+(nota2 * 2)+(nota3 * 3)) / (1+2+3);

    printf("A media ponderada do aluno e: %.2lf.", media);
}
/*Faça um algoritmo para ler três notas de um aluno em uma disciplina e imprimir a sua média ponderada (as
notas tem pesos respectivos de 1, 2 e 3).*/
