/*Fa�a um programa que efetue a apresenta��o do valor da convers�o em
real (R$) de um valor lido em d�lar(US$). O algoritmo dever� solicitar o
valor da cota��o do d�lar e tamb�m a quantidade de d�lares dispon�veis
com o usu�rio.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta;
        float valor_dolar,valor_real,cotacao;
    do
    {
        printf("Insira o valor (US$): ");
            scanf("%f",&valor_dolar);

        printf("Qual � a cota��o (US$)? ");
            scanf("%f",&cotacao);
    
    valor_real = (valor_dolar*cotacao);
        printf("O valor �: (R$) %.2f",valor_real);

        printf("\nFazer outra convers�o?[S/N]");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}