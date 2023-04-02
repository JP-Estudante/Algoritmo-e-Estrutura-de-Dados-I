/*Escrever um algoritmo que leia o nome de um vendedor, o seu salário fixo e o total de
vendas efetuadas por ele nomes (em dinheiro). Sabendo que este vendedor ganha 15% de
comissão sobre suas vendas efetuadas, informar o seu nome, o salário fixo e salário no final
do mês.*/

#include <stdio.h>
#include <stdlib.h>
int main(void)
{

    char nome[10];
    printf("Digite seu nome: ");
    scanf("%s", &nome);

    int salario_fixo;
    printf("Informe seu salario fixo: ");
    scanf("%d", &salario_fixo);

    int total_vendas;
    printf("insira o total de vendas em R$: ");
    scanf("%d", &total_vendas);

    int comis = (total_vendas * 15) / 100;

    int salario_final = (comis + salario_fixo);

    printf("O salario final de  %s", nome);
    printf("e de %d", salario_final);

    printf("\n");
    system("PAUSE");
}