/*Escrever um programa que leia os dados de ?N? pessoas (nome, sexo,
idade e sa�de) e informe se est� apta ou n�o para cumprir o servi�o militar
obrigat�rio. Informe os totais. */
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
        printf("Qual � o seu nome? ");
            fgets(nome,40,stdin);

        printf("Qual � o seu sexo?[M/F] ");
            scanf("%c",&sexo);
    if (sexo == 'f' || sexo == 'F'){
           printf("N�o est� apta ao servi�o militar! %s", nome);       
    }
        printf("Qual � a sua idade? ");
            scanf("%d",&idade);
        
        printf("Voc� possui atestado de sa�de?[S/N] ");
            fgets(saude,2,stdin);
        
            printf("\nDeseja continuar?[S/N] ");
                scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');

printf("\n");
system("PAUSE");
}