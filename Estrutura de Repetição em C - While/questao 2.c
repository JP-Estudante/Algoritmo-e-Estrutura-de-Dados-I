#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
    int num,count = 0;
    while (count != 50){    
        printf("Digíte um número: ");
            scanf("%d",&num);
            count++;
    if (num % 2 == 0){
        printf("Número Pár!\n");
    }
    
    else {
    printf ("Número Ímpar!\n");
    }
    }
        printf("\n");
    system("PAUSE");
}
