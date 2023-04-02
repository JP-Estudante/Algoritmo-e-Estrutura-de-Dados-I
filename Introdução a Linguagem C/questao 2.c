/*Faça um algoritmo que receba dois números e ao final mostre a soma, subtração,
multiplicação e a divisão dos números lidos.*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int num1, num2;
    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero: ");
    scanf("%d", &num2);

    int soma, sub, multi, divi;

    soma = num1 + num2;
    sub = num1 - num2;
    multi = num1 * num2;
    divi = num1 / num2;

    printf("======Resultados======\n");
    // print da soma
    printf("%d", num1);
    printf(" + ");
    printf("%d", num2);
    printf(" = %d", soma);
    printf("\n");

    // print da subtração
    printf("%d", num1);
    printf(" - ");
    printf("%d", num2);
    printf(" = %d", sub);
    printf("\n");

    // print da multiplicação
    printf("%d", num1);
    printf(" * ");
    printf("%d", num2);
    printf(" = %d", multi);
    printf("\n");

    // print da divisão
    printf("%d", num1);
    printf(" / ");
    printf("%d", num2);
    printf(" = %d", divi);
    printf("\n");

    system("PAUSE");
}