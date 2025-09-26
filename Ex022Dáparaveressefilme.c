#include <stdio.h>
#include <locale.h>
#include <time.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int dinheiro, horaf;
time_t t;
time(&t);
struct tm *data;
data = localtime(&t);
int horas = data->tm_hour;
int minutos=data->tm_min;

printf("<<< Ex022 - Dá para ver esse filme? >>>\n\n");
printf("{ EXERCÍCIO 020 - DÁ PARA VER O FILME? }\n\n");
printf("============== CINEMA ESTUDONAUTA ==============\n");
printf("HORÁRIO DO FILME: 19h - PREÇO DO INGRESSO: R$20\n");
printf("------------------------------------------------\n");
printf("Quanto dinheiro você tem? R$");
scanf("%i", &dinheiro);
printf("Que horas começa o filme? ");
scanf("%i", &horaf);

if (dinheiro>=20&&horaf<=19) {
    printf("Agora são %i horas e %i minutos.\n", horas, minutos);
    printf("Você consegue comprar o ingresso.\n");

} else {
printf("Agora são %i horas e %i minutos.\n", horas, minutos);
printf("Infelizmente não é possível comprar o ingresso!\n");

    }
}
