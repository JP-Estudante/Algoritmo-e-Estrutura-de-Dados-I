/*Faça um algoritmo que receba 100 números e mostre se é par ou ímpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int count,numero;
    for(count = 1; count <= 100; count++){
        printf("\nDigíte: ");
            scanf("%d",&numero);
        
        if (numero %2 == 0){
        printf("Número Par");
    }
    else{
        printf("Número Impár");
    }
    }
printf("\n");
system("PAUSE"); 
}