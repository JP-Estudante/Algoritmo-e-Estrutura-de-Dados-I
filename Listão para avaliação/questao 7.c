/*Fa�a um programa que receba 2 numero e retorne o maior entre eles.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta;
        int numero1,numero2;
    do
    {
            printf("Informe um n�mero: ");
                scanf("%d",&numero1);

            printf("Informe outro n�mero: ");
                scanf("%d",&numero2);
        
        if (numero1 > numero2){
            printf("O n�mero %d � o maior!",numero1);
        }
        else{
            printf("O n�mero %d � o maior!",numero2);
        }

            printf("\nDeseja continuar?[S/N] ");
                scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}