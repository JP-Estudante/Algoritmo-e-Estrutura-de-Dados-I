/*Escrever um algoritmo que leia o nome de um aluno e as notas das tr�s provas que ele
obteve no semestre. No final informar o nome do aluno e a sua m�dia (aritm�tica)*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void)
{
    setlocale(LC_ALL, "PORTUGUESE");
    char nome[50];

    printf("Informe seu nome: ");
    // scanf("%s",nome);
    fgets(nome, 50, stdin);

    int prova1, prova2, prova3;
    printf("Digite a nota da 1� prova: ");
    scanf("%d", &prova1);

    printf("Digite a nota da 2� prova: ");
    scanf("%d", &prova2);

    printf("Digite a nota da 3� prova: ");
    scanf("%d", &prova3);

    int media = (prova1 + prova2 + prova3) / 3;

    printf("Aluno = %s", nome, "\n");
    printf("--------------------\n");
    printf("\n");
    printf("Media de %d", media);
    printf("\n");
    system("PAUSE");
}