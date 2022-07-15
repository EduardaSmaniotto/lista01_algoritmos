#include <stdio.h>
#include <stdlib.h>

int main()
{
   double suaAltura, suaSombra, sombraPredio, x;
   printf("Informe a sua altura: ");
   scanf("%lf", &suaAltura);
   printf("Informe o tamanho da sombra do predio: ");
   scanf("%lf", &sombraPredio);
   printf("Informe o tamanho da sua sombra: ");
   scanf("%lf", &suaSombra);

   x = (suaAltura * sombraPredio) / suaSombra;
   printf("A altura do predio e de: %.2lf metros.", x);


}
/*Num dia de sol, você deseja medir a altura de um prédio, porém, a trena não é suficientemente longa.
Assumindo que seja possível medir sua sombra e a do prédio no chão, e que você lembre da sua altura, faça um
algoritmo para ler os dados necessários e calcular a altura do prédio. */
