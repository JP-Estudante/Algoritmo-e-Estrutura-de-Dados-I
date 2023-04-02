/*Faça um programa que leia notas das três provas que um aluno obteve no
semestre. No final informar a sua média (aritmética).*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta;
        int nota1,nota2,nota3,media;
    do
    {
        printf("Informe a Nota 1: ");
            scanf("%d",&nota1);
        
        printf("Informe a Nota 2: ");
            scanf("%d",&nota2);

        printf("Informe a Nota 3: ");
            scanf("%d",&nota3);

    media = ((nota1 + nota2 + nota3)/3);
        printf("A media do aluno é: %d",media);

        printf("\nSomar outra média?[S/N] ");
            scanf("%s",&resposta);
    }while(resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}