/*Ler uma temperatura em graus Celsius e apresentá-la convertida em graus Fahrenheit. A
fórmula de conversão é:
F=(9*C+160) / 5, sendo F a temperatura em Fahrenheit e C a temperatura em Celsius*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
float c, f;
setlocale(LC_ALL,"Portuguese");

    printf("Em °C: "); 
        scanf("%f", &c);
 
    f = (9 * c + 160) / 5;
 
    printf("Em °F: %f", f);

printf("\n");
system("PAUSE");
}