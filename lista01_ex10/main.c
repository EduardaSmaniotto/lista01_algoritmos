#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2;
    printf("Informe o X1: ");
    scanf("%lf", &x1);
    printf("Informe o Y1: ");
    scanf("%lf", &y1);
    printf("Informe o X2: ");
    scanf("%lf", &x2);
    printf("Informe o Y2: ");
    scanf("%lf", &y2);

    double distancia = sqrt((pow ((x2-x1),2) + (pow ((y2-y1),2))));

    printf("A ditancia entre os pontos e de: %.2lf.", distancia);
}
/*Construa um algoritmo para calcular a distância entre dois pontos do plano cartesiano. Cada ponto é um par
ordenado (x,y).*/
