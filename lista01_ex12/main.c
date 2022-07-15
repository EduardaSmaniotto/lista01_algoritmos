#include <stdio.h>
#include <stdlib.h>

int main()
{
    double salarioInicial, aumento=0.15, salarioQuaseFinal, salarioFinal;

    printf("Informe o salario inicial: ");
    scanf("%lf", &salarioInicial);

    salarioQuaseFinal = salarioInicial + (salarioInicial*0.15);
    salarioFinal = salarioQuaseFinal - (salarioQuaseFinal*0.08);

    printf("O salario inicial e de %.2lf, o salario com aumento ficou %.2lf e o salario final e de %.2lf.",
           salarioInicial, salarioQuaseFinal, salarioFinal);

}
/*Faça um algoritmo para ler o salário de um funcionário e aumentá-Io em 15%. Após o aumento, desconte 8%
de impostos. Imprima o salário inicial, o salário com o aumento e o salário final. */
