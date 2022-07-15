#include <stdio.h>
#include <stdlib.h>

int main()
{
    double diagonalMaior, diagonalMenor, area;
    printf("Informe a diagonal maior do losango: ");
    scanf("%lf", &diagonalMaior);
    printf("Informe a diagonal menor do losango: ");
    scanf("%lf", &diagonalMenor);

    area = (diagonalMaior*diagonalMenor) / 2;

    printf("A area do losango e de: %.2lf.", area);
}
/*Faça um algoritmo que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal_maior * diagonal_menor)/2; */
