#include <stdio.h>
#include <stdlib.h>

int main()
{
    int totalFrangos, peDireito, peEsquerdo;
    double gastoTotal;

    printf("Informe a quantidade de frangos da granja: ");
    scanf("%d", &totalFrangos);

    int umFrango = 4 + 7;
    gastoTotal = (double)totalFrangos * (double)umFrango;

    printf("O gasto total da granja e de: %.2lf", gastoTotal);
}
/*A granja Frangotech possui um controle automatizado de cada frango da sua produ��o. No p� direito do
frango h� um anel com um chip de identifica��o; no p� esquerdo s�o dois an�is para indicar o tipo de alimento
que ele deve consumir. Sabendo que o anel com chip custa R$4,00 e o anel de alimento custa
R$3,50, fa�a um algoritmo para calcular o gasto total da granja para marcar todos os seus frangos. */
