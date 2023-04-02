/*Faça um programa que imprima os números pares de 1 a 1000.*/
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