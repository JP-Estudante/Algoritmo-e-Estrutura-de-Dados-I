/* Ler dois valores para as variáveis A e B, e efetuar as trocas dos valores de forma que a
variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da
variável A. Apresentar os valores trocados. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
        
        setlocale(LC_ALL,"PORTUGUESE");
    int var_A;
        printf("Insira um valor para a variável A: ");
            scanf("%d",&var_A);
        
    int var_B;
        printf("Insira um valor para a variável B: ");
            scanf("%d",&var_B);

    int aux;
        aux = var_B;
        var_B = var_A;
        var_A = aux;

        printf("O valor da variável A agora é de: %d",var_A);
        printf("\nO valor da variável B agora é de: %d",var_B);

        printf("\n");
    system("PAUSE");
}