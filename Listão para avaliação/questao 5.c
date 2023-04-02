/*Faça um programa que efetue a apresentação do valor da conversão em
real (R$) de um valor lido em dólar(US$). O algoritmo deverá solicitar o
valor da cotação do dólar e também a quantidade de dólares disponíveis
com o usuário.*/
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

        printf("Qual é a cotação (US$)? ");
            scanf("%f",&cotacao);
    
    valor_real = (valor_dolar*cotacao);
        printf("O valor é: (R$) %.2f",valor_real);

        printf("\nFazer outra conversão?[S/N]");
            scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}