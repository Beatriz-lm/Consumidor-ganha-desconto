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

printf("<<< Ex022 - D� para ver esse filme? >>>\n\n");
printf("{ EXERC�CIO 020 - D� PARA VER O FILME? }\n\n");
printf("============== CINEMA ESTUDONAUTA ==============\n");
printf("HOR�RIO DO FILME: 19h - PRE�O DO INGRESSO: R$20\n");
printf("------------------------------------------------\n");
printf("Quanto dinheiro voc� tem? R$");
scanf("%i", &dinheiro);
printf("Que horas come�a o filme? ");
scanf("%i", &horaf);

if (dinheiro>=20&&horaf<=19) {
    printf("Agora s�o %i horas e %i minutos.\n", horas, minutos);
    printf("Voc� consegue comprar o ingresso.\n");

} else {
printf("Agora s�o %i horas e %i minutos.\n", horas, minutos);
printf("Infelizmente n�o � poss�vel comprar o ingresso!\n");

    }
}
