#include <stdio.h>
#include <locale.h>
#include <time.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int nasc, idade;
time_t t;
time(&t);
struct tm *data;
data = localtime(&t);
int ano = data->tm_year;

printf("<<< Ex017 - Fila de Banco >>>\n\n");
printf("Em que ano você nasceu? ");
scanf("%i", &nasc);
ano = ano + 1900;
idade = ano - nasc;

if(idade<65){
    printf("---------------------------------------\n");
    printf("Você tem %i anos, certo?\n", idade);
    printf("Seja Bem-Vindo(a) ao Banco Estudonauta!\n");
    printf("---------------------------------------\n");
}

if(idade>=65){
    printf("----------------------------------------------------\n");
    printf("Você tem %i anos, certo?\n", idade);
    printf("Seja Bem-Vindo(a) ao Banco Estudonauta!\n");
    printf("=== ATENÇÃO! DIRIJA-SE PARA A FILA PREFERENCIAL ===\n");
    printf("----------------------------------------------------\n");
    }
}
