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
/*Num dia de sol, voc� deseja medir a altura de um pr�dio, por�m, a trena n�o � suficientemente longa.
Assumindo que seja poss�vel medir sua sombra e a do pr�dio no ch�o, e que voc� lembre da sua altura, fa�a um
algoritmo para ler os dados necess�rios e calcular a altura do pr�dio. */
