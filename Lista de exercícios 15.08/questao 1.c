#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(void){
    int idade;

setlocale(LC_ALL,"Portuguese");
    printf ("Insíra a idade? ");
        scanf("%i",&idade);
switch (idade){

case 5:
case 6:
case 7:
printf("INFANTIL A");
  break;

case 8:
case 9:
case 10:
printf("INFANTIL B");
  break;

case 11:
case 12:
case 13:
printf("JUVENIL A");
  break;

case 14:
case 15:
case 16:
case 17:
printf("JUVENIL B");
  break;

case 18:
case 19:
case 20:
case 21:
case 22:
case 23:
case 24:
case 25:
printf("SÊNIOR");
  break;

default:
printf("Idade ínvalida!");
}
printf("\n");
system("PAUSE");
}