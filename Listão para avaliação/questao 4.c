/*Fa�a um programa para determinar o consumo m�dio de um autom�vel
sendo fornecida a dist�ncia total percorrida pelo autom�vel e o total de
combust�vel gasto*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta; 
        int distancia_percorrida,quantia_abastecida,consumo_medio;
    do
    {
        printf ("Digite a dist�ncia percorrida: ");
            scanf("%d",&distancia_percorrida);

        printf("Total de combust�vel gasto: ");
            scanf("%d",&quantia_abastecida);

    consumo_medio = (distancia_percorrida/quantia_abastecida);

        printf("A m�dia � de %d",consumo_medio);

        printf("/nCalcular outra m�dia?[S/N]");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}