/*Fa�a um programa que imprima os n�meros pares de 1 a 1000.*/
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
    setlocale(LC_ALL,"Portuguese");
    int i = 0;
        for (i = 1; i <= 1000; i++)
        {
            if (i %2 == 0){
                printf(" %i ",i);
            }

        }
        
}