/*Escrever um programa que leia os dados de ?N? pessoas (nome, sexo,
idade e saúde) e informe se está apta ou não para cumprir o serviço militar
obrigatório. Informe os totais. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        int i;
        char resposta;
        char nome[40];
        char sexo;
        char saude;
        int idade;
    for (i=0; )
        printf("Qual é o seu nome? ");
            fgets(nome,40,stdin);

        printf("Qual é o seu sexo?[M/F] ");
            scanf("%c",&sexo);
    if (sexo == 'f' || sexo == 'F'){
           printf("Não está apta ao serviço militar! %s", nome);       
    }
        printf("Qual é a sua idade? ");
            scanf("%d",&idade);
        
        printf("Você possui atestado de saúde?[S/N] ");
            fgets(saude,2,stdin);
        
            printf("\nDeseja continuar?[S/N] ");
                scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');

printf("\n");
system("PAUSE");
}