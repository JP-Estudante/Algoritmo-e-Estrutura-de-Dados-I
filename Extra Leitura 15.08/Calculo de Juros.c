/*Suponha que você atrasou uma conta. A cada mês que você deixa de pagar, será cobrado 1% de
juros no valor inicial. Ou seja, se você atrasar um mês, irá pagar 1%. Se atrasar 3 meses, irá pagar
3% etc. Vamos supor que você pode atrasar, no máximo, 5 meses. &nbsp; O programa pede,
como entrada, dois valores: - um float: com o valor de sua dívida inicial (valor_i) - um inteiro: de
0 até 5, que são os meses de atraso. Faça um programa em C que calculo o juros de atraso. Use
switch e case acumulados.*/

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"PORTUGUESE");
    float valor_inicial;
    int juros = 0;
    float valor_final;
        printf("Qual era o valor inicial? ");
            scanf("%f",&valor_inicial);

    int atrasos;
        printf("Quantos meses irá atrasar [1-5]: ");
            scanf("%d",&atrasos);
        
    switch (atrasos){
    case 5:
        juros++;
    
    case 4:
        juros++;

    case 3:
        juros++;

    case 2:
        juros++;

    case 1:
        juros++;
        break;   
    default:
        printf("Valor de atraso inválido!!!");
    }
        printf("Juros: %d%%\n",juros);
        valor_final=( (1 + (juros/100.0))*valor_inicial);
        printf("Valor final da dívida: R$ %.2f\n", valor_final);

}