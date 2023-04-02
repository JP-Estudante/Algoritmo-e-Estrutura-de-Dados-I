/*Faça um algoritmo que receba ?N? números e mostre positivo, negativo ou
zero para cada número.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    char resposta;
    int count,numero;
    do{
        printf("\nDigíte: ");
            scanf("%d",&numero);
        
        if (0 < numero){
        printf("Número positivo");
    }
    if (0 > numero)
    {
        printf("Número negativo");
    }
    if (0 == numero)
    {
        printf("Número igual a zero");
    }
        printf("\nDeseja continuar?[S/N] ");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}