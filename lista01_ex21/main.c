#include <stdio.h>
#include <stdlib.h>

int main()
{
    double latas, garrafaMenor, garrafaMaior;
    printf("Informe a quantidade de latas compradas: ");
    scanf("%lf", &latas);
    printf("Informe a quantidade de garrafas menores compradas: ");
    scanf("%lf", &garrafaMenor);
    printf("Informe a quantidade de garrafas maiores compradas: ");
    scanf("%lf", &garrafaMaior);

    double total = (latas * 0.35) + (garrafaMenor * 0.6) + (garrafaMaior * 2);

    printf("A quantidade total de litros e de: %.2lf", total);
}
/*A fábrica de refrigerantes Meia-Cola vende seu produto em três formatos: lata de 350 ml, garrafa de 600 ml e
garrafa de 2 litros. Se um comerciante compra uma determinada quantidade de cada formato, faça um algoritmo
para calcular quantos litros de refrigerante ele comprou. */
