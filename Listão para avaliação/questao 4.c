/*Faça um programa para determinar o consumo médio de um automóvel
sendo fornecida a distância total percorrida pelo automóvel e o total de
combustível gasto*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta; 
        int distancia_percorrida,quantia_abastecida,consumo_medio;
    do
    {
        printf ("Digite a distância percorrida: ");
            scanf("%d",&distancia_percorrida);

        printf("Total de combustível gasto: ");
            scanf("%d",&quantia_abastecida);

    consumo_medio = (distancia_percorrida/quantia_abastecida);

        printf("A média é de %d",consumo_medio);

        printf("/nCalcular outra média?[S/N]");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}