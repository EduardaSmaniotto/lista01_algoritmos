#include <stdio.h>
#include <stdlib.h>

int main()
{
    int diasSemAcidentes, meses, anos, dias;

    printf("Informe a quantidade de dias sem acidentes: ");
    scanf("%d", &diasSemAcidentes);

    anos = diasSemAcidentes/360;
    meses = diasSemAcidentes/30 - (anos*12);
    dias = diasSemAcidentes%30;

    printf("O tempo sem acidentes e de %d dias, %d meses e %d anos.", dias, meses, anos);
}
/*Uma f�brica controla o tempo de trabalho sem acidentes pela quantidade de dias. Fa�a um algoritmo para
converter este tempo em anos, meses e dias. Assuma que cada m�s possui sempre 30 dias. */
