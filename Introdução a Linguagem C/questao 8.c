/*Elaborar um algoritmo que efetue a apresentação do valor da conversão em real (R$) de
um valor lido em dólar(US$). O algoritmo deverá solicitar o valor da cotação do dólar e
também a quantidade de dólares disponíveis com o usuário. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
float dollar,real,cotacao;   
        
        printf("Quantia que você irá converter -> ");
            scanf("%f",&dollar);

        printf("Qual é a cotação? ");
            scanf("%f",&cotacao);
       
real = (dollar / cotacao);

        printf("Você tem R$ %f",real);

        printf("\n");
    system("PAUSE");
}
