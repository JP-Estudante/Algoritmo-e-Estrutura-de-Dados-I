/*Fa�a um algoritmo que receba ?N? n�meros e mostre positivo, negativo ou
zero para cada n�mero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    char resposta;
    int count,numero;
    do{
        printf("\nDig�te: ");
            scanf("%d",&numero);
        
        if (0 < numero){
        printf("N�mero positivo");
    }
    if (0 > numero)
    {
        printf("N�mero negativo");
    }
    if (0 == numero)
    {
        printf("N�mero igual a zero");
    }
        printf("\nDeseja continuar?[S/N] ");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}