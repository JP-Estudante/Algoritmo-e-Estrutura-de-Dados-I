// Faça um algoritmo que receba dois números e exiba o resultado da sua soma.
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num1, num2, soma;
    printf("Digite um numero: ");
    scanf("%i", &num1);

    printf("Digite outro numero: ");
    scanf("%i", &num2);

    soma = num1 + num2;

    printf("A soma e: %i\n", soma);
    system("PAUSE");
}
