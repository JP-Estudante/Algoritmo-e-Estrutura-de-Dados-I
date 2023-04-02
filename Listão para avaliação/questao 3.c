/*Faça um programa que receba o valor do quilo de um produto e a
quantidade de quilos do produto consumida calculando o valor final a ser
pago.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta; 
        int valor_quilo,quantidade_quilo,valor_pago;
        do
        {
            printf("Qual é o valor do KG:");
                scanf("%d",&valor_quilo);

            printf("Quantidade de KG:");
                scanf("%d",&quantidade_quilo);
        
        valor_pago = (valor_quilo*quantidade_quilo);

            printf("Total à pagar R$ %d",valor_pago);

            printf("\nFazer outro peso?[S/N]");
                scanf("%s",&resposta);
        }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}