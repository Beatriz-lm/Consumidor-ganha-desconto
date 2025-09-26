#include <stdio.h>
#include <locale.h>
#include <time.h>

void main () {
setlocale(LC_ALL, "Portuguese");

int nasc, idade, alistamento, qtsanos;
time_t t;
time(&t);
struct tm *data;
data = localtime(&t);
int ano = data->tm_year;
ano += 1900;

printf("<<< Ex025 - Serviço Militar v2.0 >>>\n\n");
printf("Atualmente estamos no ano de 2025.\n");
printf("Em que ano você nasceu? ");
fflush(stdin);
scanf(" %i", &nasc);

idade = ano - nasc;
if (idade>18){
    printf("-----------------------------------------------------\n");
        printf("Sua idade atual é %i anos.\n", idade);
            alistamento = nasc + 18;
                qtsanos = ano - alistamento;
                    printf("Seu alistamento foi em %i. Já se passaram %i anos.\n", alistamento, qtsanos);
                        printf("-----------------------------------------------------\n");
}else if (idade <18){
    printf("-----------------------------------------------------\n");
        printf("Sua idade atual é %i anos.\n", idade);
            alistamento = nasc + 18;
                qtsanos = alistamento - ano;
                    printf("Seu alistamento será em %i. Faltam %i anos.\n", alistamento, qtsanos);
                        printf("-----------------------------------------------------\n");
}else{
    printf("---------------------------------------------------------\n");
        printf("Sua idade atual é %i anos.\n", idade);
            alistamento = nasc + 18;
                printf("Você completa %i anos exatamente em %i. Vá se alistar.\n", idade, ano);
                    printf("---------------------------------------------------------\n");
        }

}
