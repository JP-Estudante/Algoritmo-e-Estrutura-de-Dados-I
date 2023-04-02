/*A escola ?APRENDER? faz o pagamento de seus professores por
hora/aula. Faça um algoritmo que calcule e exiba o salário de um professor.
Sabe-se que o valor da hora/aula segue a tabela abaixo:
Professor Nível 1 R$12,00 por hora/aula
Professor Nível 2 R$17,00 por hora/aula
Professor Nível 3 R$25,00 por hora/aula */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(void){
    setlocale(LC_ALL,"Portuguese");
        char resposta;
        int horas,nivel;
        float salario;
        do{
            printf("Informe carga horária do professor(a): ");
                scanf("%d",&horas);

            printf("Informe o nível do professor(a) [1|2|3]: ");
                scanf("%d",&nivel);

            switch (nivel){
                case 1:
            salario = (horas*12.00);
                printf("O salário é de R$%.2f",salario);
                break;
                
                case 2:
            salario = (horas*17.00);
                printf("O salário é de R$%.2f",salario);
                break;

                case 3:
            salario = (horas*25.00);
                printf("O salário é de R$%.2f",salario);
                break;
            default:
                printf("Nível inválido");
                break;
            }
            printf("\nDeseja continuar?[S/N] ");
                scanf("%s",&resposta);
    }while (resposta == 's' || resposta == 'S');
printf("\n");
system("PAUSE"); 
}