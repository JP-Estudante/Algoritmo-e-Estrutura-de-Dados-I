#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
setlocale(LC_ALL,"Portuguese");

int preco;
        printf("Insira o preço do produto: ");
            scanf("%d",&preco);
    
    float desconto = preco - (preco * 0.1); //desconto de 10%
        printf("O Valor com 10%% de desconto à vista >> %f\n",desconto);

    float parcelamento_sem_juros = (preco / 5); //parcelado em 5x sem juros
        printf("Valor parcelado sem juros em 5x >> %f\n",parcelamento_sem_juros);

    float parcelamento_com_juros = (preco / 10) * 1.2; //parcelado em 10x com 20% de juros
        printf("Valor parcelado com juros em 10x >> %f\n",parcelamento_com_juros);
}