#include <stdio.h>
#include <stdlib.h>

int main()
{
    double preco, valor;
    printf("Informe o preco do litro da gasolina: ");
    scanf("%lf", &preco);
    printf("Informe o valor que deseja colocar de gasolina: ");
    scanf("%lf", &valor);

    double litros = valor / preco;

    printf("\nA quantidade de litros colocada foi: %.2lf", litros);

}
/*Um motorista deseja colocar no seu tanque X reais de gasolina. Escreva um algoritmo para ler o preço do
litro da gasolina e o valor do pagamento, e exibir quantos litros ele conseguiu colocar no tanque*/
