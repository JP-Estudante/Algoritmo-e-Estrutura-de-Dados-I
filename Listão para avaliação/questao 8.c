/*A escola ?APRENDER? faz o pagamento de seus professores por
hora/aula. Fa�a um algoritmo que calcule e exiba o sal�rio de um professor.
Sabe-se que o valor da hora/aula segue a tabela abaixo:
Professor N�vel 1 R$12,00 por hora/aula
Professor N�vel 2 R$17,00 por hora/aula
Professor N�vel 3 R$25,00 por hora/aula */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta;
        int horas,nivel;
        float salario;
        do{
            printf("Informe carga hor�ria do professor(a): ");
                scanf("%d",&horas);

            printf("Informe o n�vel do professor(a) [1|2|3]: ");
                scanf("%d",&nivel);

            switch (nivel){
                case 1:
            salario = (horas*12.00);
                printf("O sal�rio � de R$%.2f",salario);
                break;
                
                case 2:
            salario = (horas*17.00);
                printf("O sal�rio � de R$%.2f",salario);
                break;

                case 3:
            salario = (horas*25.00);
                printf("O sal�rio � de R$%.2f",salario);
                break;
            default:
                printf("N�vel inv�lido");
                break;
            }
            printf("\nDeseja continuar?[S/N] ");
                scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}