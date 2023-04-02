/*Faça um programa que receba o preço de custo e o preço de venda de 40
produtos. Mostre como resultado se houve lucro, prejuízo ou empate para
cada produto. Informe media de preço de custo e do preço de venda.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int prejuizo,lucro,empate;
    int count,preco_custo,preco_venda;
    for(count = 1; count <= 40; count++){
        printf("\nPreço de custo: ");
            scanf("%d",&preco_custo);
        
        printf("Preço de venda: ");
            scanf("%d",&preco_venda);
    prejuizo = preco_custo > preco_venda;
    lucro = preco_custo < preco_venda; 
    empate = preco_custo == preco_venda;
        
    if (empate)
    {
        printf("Empate");
    }
    if(lucro)
    {
        printf("Lucro");
    }
    if(prejuizo)
    {
        printf("Prejuízo");
    }
    }
printf("\n");
system("PAUSE");  
}