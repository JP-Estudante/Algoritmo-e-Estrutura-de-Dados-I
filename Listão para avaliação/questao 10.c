/*Fa�a um programa que receba o pre�o de custo e o pre�o de venda de 40
produtos. Mostre como resultado se houve lucro, preju�zo ou empate para
cada produto. Informe media de pre�o de custo e do pre�o de venda.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int prejuizo,lucro,empate;
    int count,preco_custo,preco_venda;
    for(count = 1; count <= 40; count++){
        printf("\nPre�o de custo: ");
            scanf("%d",&preco_custo);
        
        printf("Pre�o de venda: ");
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
        printf("Preju�zo");
    }
    }
printf("\n");
system("PAUSE");  
}