#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
  int cateto1, cateto2, hipotenusa2, hipotenusa;
  printf("Informe o valor do primeiro cateto: ");
  scanf("%d", &cateto1);
  printf("Informe o valor do segundo cateto: ");
  scanf("%d", &cateto2);

  hipotenusa2 = pow(cateto1,2) + pow(cateto2, 2);
  hipotenusa = sqrt(hipotenusa2);

  printf("A hipotenusa do triangulo e: %d.", hipotenusa);
}
/*Fa�a um algoritmo que receba o valor dos catetos de um tri�ngulo, calcule e mostre o valor da hipotenusa*/
