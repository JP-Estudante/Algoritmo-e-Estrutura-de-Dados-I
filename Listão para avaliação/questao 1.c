/*Fa�a um programa que receba dois n�meros e ao final mostre a soma,
subtra��o, multiplica��o e a divis�o dos n�meros lidos.*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
int num1,num2;
        printf("Digite um n�mero: ");
            scanf("%d",&num1);

        printf("Digite um n�mero: ");
            scanf("%d",&num2);
int resultado = 0;
    resultado = (num1+num2);
        printf("Os n�meros %d + %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1-num2);
        printf("Os n�meros %d - %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1*num2);
        printf("Os n�meros %d x %d = %d\n",num1,num2,resultado);
    resultado = 0;
    resultado = (num1/num2);
        printf("Os n�meros %d � %d = %d\n",num1,num2,resultado);    
printf("\n");
system("PAUSE");
}