/*Fa�a um algoritmo que calcule o valor da conta de luz de uma pessoa.
Sabe-se que o c�lculo da conta de luz segue a tabela abaixo:*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
int cliente;
    printf ("\n 1 - resid�ncia:\n 2- com�rcio:\n 3- ind�stria:\n");
    printf("Informe:");
    scanf("%d",&cliente);
int consumo;
    printf ("Informe o consumo em KW/h: ");
    scanf ("%d",&consumo);
float valor;

switch (cliente){
    case 1:
    (valor = consumo*0.60);
    printf("Sua conta de luz resid�ncia � de: %f",valor);
    break;

    case 2:
    (valor = consumo*0.48);
    printf("Sua conta de luz com�rcial � de: %f",valor);
    break;

    case 3:
    (valor = consumo*1.29);
    printf("Sua conta de luz ind�strial � de: %f",valor);
    break;
}
printf("\n");
system("PAUSE");
}