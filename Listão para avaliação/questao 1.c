/*Faça um programa que receba dois números e ao final mostre a soma,
subtração, multiplicação e a divisão dos números lidos.*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
int num1,num2;
        printf("Digite um número: ");
            scanf("%d",&num1);

        printf("Digite um número: ");
            scanf("%d",&num2);
int resultado = 0;
    resultado = (num1+num2);
        printf("Os números %d + %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1-num2);
        printf("Os números %d - %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1*num2);
        printf("Os números %d x %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1/num2);
        printf("Os números %d ÷ %d = %d\n",num1,num2,resultado);    
printf("\n");
system("PAUSE");
}