/* Crie um programa que receba um inteiro, de 1 at� 12, representando os meses do ano e retorne
o n�mero de dias do m�s. Use switch e n�o use break. Acumule os case. */

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"PORTUGUESE");
    int mes,dias=31;

        printf("Digite o mes [1-12]: ");
            scanf("%d", &mes);

    if(mes>12 || mes<1)
        printf("M�s inv�lido\n");
    else
        switch (mes){
        case 2:
            dias -=2;
        case 4: case 6: case 9: case 11:
            dias --;
        
        printf("O mes %d possui %d dias",mes,dias);    
        }
}
