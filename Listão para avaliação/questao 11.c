/*Fa�a um algoritmo que receba 100 n�meros e mostre se � par ou �mpar.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int count,numero;
    for(count = 1; count <= 100; count++){
        printf("\nDig�te: ");
            scanf("%d",&numero);
        
        if (numero %2 == 0){
        printf("N�mero Par");
    }
    else{
        printf("N�mero Imp�r");
    }
    }
printf("\n");
system("PAUSE"); 
}