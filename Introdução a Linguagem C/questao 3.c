/*Escrever um algoritmo para determinar o consumo m�dio de um autom�vel sendo
fornecida a dist�ncia total percorrida pelo autom�vel e o total de combust�vel gasto. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    float distancia_total;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a dist�ncia total percorrida pelo autom�vel: ");
    scanf("%f", &distancia_total);

    float combustivel;
    printf("Insira quantos litros de combust�vel foi colocado: ");
    scanf("%f", &combustivel);

    printf("A m�dia do seu automovel � de %f%f", distancia_total / combustivel);

    printf("\n");
    system("PAUSE");
}