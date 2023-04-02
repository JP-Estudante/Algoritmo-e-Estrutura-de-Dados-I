#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
    int num,tabuada,count = 1;
        printf("Escolha um número para a tabuada: ");
            scanf("%d",&num);     
         
    while (count <= 10){
            tabuada = num*count;
            printf("%d\n",tabuada);
            count++;
         }
    printf("\n");
    system("PAUSE");        
}