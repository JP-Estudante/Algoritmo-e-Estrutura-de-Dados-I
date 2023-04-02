/*Suponha que voc� atrasou uma conta. A cada m�s que voc� deixa de pagar, ser� cobrado 1% de
juros no valor inicial. Ou seja, se voc� atrasar um m�s, ir� pagar 1%. Se atrasar 3 meses, ir� pagar
3% etc. Vamos supor que voc� pode atrasar, no m�ximo, 5 meses. &nbsp; O programa pede,
como entrada, dois valores: - um float: com o valor de sua d�vida inicial (valor_i) - um inteiro: de
0 at� 5, que s�o os meses de atraso. Fa�a um programa em C que calculo o juros de atraso. Use
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
        printf("Quantos meses ir� atrasar [1-5]: ");
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
        printf("Valor de atraso inv�lido!!!");
    }
        printf("Juros: %d%%\n",juros);
        valor_final=( (1 + (juros/100.0))*valor_inicial);
        printf("Valor final da d�vida: R$ %.2f\n", valor_final);

}