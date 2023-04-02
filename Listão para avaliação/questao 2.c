/*Faça um programa que receba um valor que é o valor pago, um segundo
valor que é o preço do produto e retorne o troco a ser dado.*/
#include <stdlib.h>
#include <stdio.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");
    char resposta;
    int valor_pago, preco_produto,troco;

        do
        {
            printf("Digite o valor pago:");
                scanf("%d",&valor_pago);
            
            printf("Preço do produto: ");
                scanf("%d",&preco_produto);
            
        if (valor_pago <= preco_produto)
        {
            printf("Sem troco!");
        }
        else
        {

        
        troco = (valor_pago - preco_produto);
            printf("O troco é de %d",troco);
        }
            printf("\nDeseja continuar[S/N]");
                scanf("%s",&resposta);

        }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE");      
}