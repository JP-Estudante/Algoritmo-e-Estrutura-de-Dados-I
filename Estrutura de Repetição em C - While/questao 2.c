#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
setlocale(LC_ALL,"Portuguese");
    int num,count = 0;
    while (count != 50){    
        printf("Dig�te um n�mero: ");
            scanf("%d",&num);
            count++;
    if (num % 2 == 0){
        printf("N�mero P�r!\n");
    }
    
    else {
    printf ("N�mero �mpar!\n");
    }
    }
        printf("\n");
    system("PAUSE");
}
