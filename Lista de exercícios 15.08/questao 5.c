#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");

int peso_terra;
    printf("Digíte seu peso: ");
        scanf("%d",&peso_terra);

int planetas;
    printf("----Escolha um Planeta----\n");
        printf("1- Mercúrio\n");
        printf("2- Vênus\n");
        printf("3- Marte\n");
        printf("4- Júpiter\n");
        printf("5- Saturno\n");
        printf("6- Urano\n");
            scanf("%d",&planetas);
    float peso_no_planeta;
    switch (planetas){
    case 1:
        peso_no_planeta = (peso_terra * 0.37);
        printf("O seu peso em Mercúrio é de: %f",peso_no_planeta);
        break;

    case 2:
        peso_no_planeta = (peso_terra * 0.88);
        printf("O seu peso em Vênus é de: %f",peso_no_planeta);
        break;

    case 3:
        peso_no_planeta = (peso_terra * 0.38);
        printf("O seu peso em Marte é de: %f",peso_no_planeta);
        break;

    case 4:
        peso_no_planeta = (peso_terra * 2.64);
        printf("O seu peso em Júpiter é de: %f",peso_no_planeta);
        break;

    case 5:
        peso_no_planeta = (peso_terra * 1.15);
        printf("O seu peso em Saturno é de: %f",peso_no_planeta);
        break;

    case 6:
        peso_no_planeta = (peso_terra * 1.17);
        printf("O seu peso em Urano é de: %f",peso_no_planeta);
        break;    
    default:
        printf("Planeta inválido!!!");
        break;
    }
    printf("\n");
system("PAUSE");
}