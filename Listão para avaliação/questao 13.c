/*Escreva um programa que pergunte um número ao usuário e imprima a
tabuada completa desse número.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int i = 0,numero,num;
        printf("Escolha um número para a tabuada: ");
            scanf("%d",&numero);
        while (i <= 9)
        {
            i++;
            num = (numero * i);
            printf("\n%dx%d = %d",numero,i,num);

        }
        
}