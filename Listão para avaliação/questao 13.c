/*Escreva um programa que pergunte um n�mero ao usu�rio e imprima a
tabuada completa desse n�mero.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int i = 0,numero,num;
        printf("Escolha um n�mero para a tabuada: ");
            scanf("%d",&numero);
        while (i <= 9)
        {
            i++;
            num = (numero * i);
            printf("\n%dx%d = %d",numero,i,num);

        }
        
}