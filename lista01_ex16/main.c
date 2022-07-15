#include <stdio.h>
#include <stdlib.h>

int main()
{
    double gramas, valorEmKG;
    double sanduiche = 250, quantSanduiche;

    printf("Informe a quantidade de sanduiches: ");
    scanf("%lf", &quantSanduiche);
    gramas = 250 * quantSanduiche;

    valorEmKG = gramas / 1000;

    double hamburguer = (quantSanduiche * 100) / 1000;
    double queijo = (quantSanduiche * 100) / 1000;
    double presunto = (quantSanduiche * 50) / 1000;

    printf("A quantidade de hamburguers necessarios para os %.2lfkg e %.2lfkg, de queijo e %.2lfkg e de presunto e %.2lfkg.", valorEmKG,
           hamburguer, queijo, presunto);

}
/*A lanchonete Gostosura vende apenas um tipo de sanduíche, cujo recheio inclui duas fatias de queijo, uma
fatia de presunto e uma rodela de hambúrguer. Sabendo que cada fatia de queijo ou presunto pesa 50 gramas,
 e que a rodela de hambúrguer pesa 100 gramas, faça um algoritmo em que o dono forneça a quantidade de sanduíches
  a fazer, e a máquina informe as quantidades (em quilos) de queijo, presunto e carne
necessários para compra. */




