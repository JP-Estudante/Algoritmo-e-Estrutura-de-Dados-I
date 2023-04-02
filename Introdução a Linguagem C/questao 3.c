/*Escrever um algoritmo para determinar o consumo médio de um automóvel sendo
fornecida a distância total percorrida pelo automóvel e o total de combustível gasto. */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main()
{

    float distancia_total;
    setlocale(LC_ALL, "Portuguese");
    printf("Insira a distância total percorrida pelo automóvel: ");
    scanf("%f", &distancia_total);

    float combustivel;
    printf("Insira quantos litros de combustível foi colocado: ");
    scanf("%f", &combustivel);

    printf("A média do seu automovel é de %f%f", distancia_total / combustivel);

    printf("\n");
    system("PAUSE");
}