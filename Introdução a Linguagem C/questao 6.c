/* Ler dois valores para as vari�veis A e B, e efetuar as trocas dos valores de forma que a
vari�vel A passe a possuir o valor da vari�vel B e a vari�vel B passe a possuir o valor da
vari�vel A. Apresentar os valores trocados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
        
        setlocale(LC_ALL,"PORTUGUESE");
    int var_A;
        printf("Insira um valor para a vari�vel A: ");
            scanf("%d",&var_A);
        
    int var_B;
        printf("Insira um valor para a vari�vel B: ");
            scanf("%d",&var_B);

    int aux;
        aux = var_B;
        var_B = var_A;
        var_A = aux;

        printf("O valor da vari�vel A agora � de: %d",var_A);
        printf("\nO valor da vari�vel B agora � de: %d",var_B);

        printf("\n");
    system("PAUSE");
}