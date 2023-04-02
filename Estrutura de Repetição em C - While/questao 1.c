#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
    int idade,count = 1;
        
        while (count != 76){
            printf("Digite a idade: ");
                scanf("%d",&idade);
            count++;
            
        if (idade < 18){
            printf("Você é menor de idade!\n");
            }
        
        else{
            printf("Você é maior de idade!\n");
        }

            }    

        printf("\n");
system("PAUSE");
}