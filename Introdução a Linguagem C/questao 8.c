/*Elaborar um algoritmo que efetue a apresenta��o do valor da convers�o em real (R$) de
um valor lido em d�lar(US$). O algoritmo dever� solicitar o valor da cota��o do d�lar e
tamb�m a quantidade de d�lares dispon�veis com o usu�rio. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
float dollar,real,cotacao;   
        
        printf("Quantia que voc� ir� converter -> ");
            scanf("%f",&dollar);

        printf("Qual � a cota��o? ");
            scanf("%f",&cotacao);
       
real = (dollar / cotacao);

        printf("Voc� tem R$ %f",real);

        printf("\n");
    system("PAUSE");
}
