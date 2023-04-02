/*Uma Companhia de Seguros possui noVe categorias de seguro baseadas na idade e ocupação do segurado.
Somente pessoas com pelo menos 17 anos e não mais de 70 anos podem adquirir apólices de seguro. Quanto
às classes de ocupações, foram definidos três grupos de risco. A tabela abaixo fornece as categorias em função
da faixa etária e do grupo de risco. Dados nome, idade e grupo de risco, determinar a categoria do pretendente
à aquisição de tal seguro.
Imprimir o nome a idade e a categoria do pretendente, e , caso a idade não esteja na faixa necessária, imprimir
uma mensagem. 
*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(Void){
setlocale(LC_ALL,"Portuguese");
    char nome[200];
        printf("Insira seu nome: ");
            scanf("%s",&nome);
    
    int idade;  
        printf("Insira sua idade: ");
            scanf("%d",&idade);

    int grupo_de_risco;
        printf("====Grupos De Risco====\n");
        printf("1- Baixo\n");
        printf("2- Médio\n");
        printf("3- Alto\n");
        printf("Responda >>> ");   
            scanf("%d",&grupo_de_risco);
        
    if (idade >= 17 && idade <= 20 && grupo_de_risco == 1){
            printf("Você está na categoria 1 com %d",idade);
        }
        
    if (idade >= 17 && idade <= 20 && grupo_de_risco == 2){
            printf("Você está na categoria 2 com %d",idade);
        }
        
    if (idade >= 17 && idade <= 20 && grupo_de_risco == 3){
            printf("Você está na categoria 3 com %d",idade);
        }

    if (idade >= 21 && idade <= 24 && grupo_de_risco == 1){
            printf("Você está na categoria 2 com %d",idade);
    }

    if (idade >= 21 && idade <= 24 && grupo_de_risco == 2){
            printf("Você está na categoria 3 com %d",idade);
    }

    if (idade >= 21 && idade <= 24 && grupo_de_risco == 3){
            printf("Você está na categoria 4 com %d",idade);
    }

    if (idade >= 25 && idade <= 34 && grupo_de_risco == 1){
            printf("Você está na categoria 3 com %d",idade);
    }

    if (idade >= 25 && idade <= 34 && grupo_de_risco == 2){
            printf("Você está na categoria 4 com %d",idade);
    }

    if (idade >= 25 && idade <= 34 && grupo_de_risco == 3){
            printf("Você está na categoria 5 com %d",idade);
    }

    if (idade >= 35 && idade <= 64 && grupo_de_risco == 1){
            printf("Você está na categoria 4 com %d",idade);
    }

    if (idade >= 35 && idade <= 64 && grupo_de_risco == 2){
            printf("Você está na categoria 5 com %d",idade);
    }

    if (idade >= 35 && idade <= 64 && grupo_de_risco == 3){
            printf("Você está na categoria 6 com %d",idade);
    }

    if (idade >= 65 && idade <= 70 && grupo_de_risco == 1){
            printf("Você está na categoria 7 com %d",idade);
    }

    if (idade >= 65 && idade <= 70 && grupo_de_risco == 2){
            printf("Você está na categoria 8 com %d",idade);
    }

    if (idade >= 65 && idade <= 70 && grupo_de_risco == 3){
            printf("Você está na categoria 9 com %d",idade);
    }

printf("\n");
system("PAUSE");
}