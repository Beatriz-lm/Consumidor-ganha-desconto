#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int primeiro, segundo, total;
char conta;

printf("<<< Ex028 - Super Calculadora v1.0 >>>\n\n");
printf("VALOR 1 = ");
fflush(stdin);
scanf("%i", &primeiro);
printf("VALOR 2 = ");
fflush(stdin);
scanf("%i", &segundo);
printf("============================\n");
printf("+\tAdi��o\n-\tSubtra��o\n*\tMultiplica��o\n/\tDivis�o\n");
printf("============================\n");
printf("Digite sua op��o => ");
fflush(stdin);
scanf("%c", &conta);

switch(conta){
case '+':
total = primeiro + segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i � igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '-':
total = primeiro - segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i � igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '*':
total = primeiro * segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i � igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '/':
total = primeiro / segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i � igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

default:
printf("-------------------------------------------------------\n");
printf("N�o foi poss�vel fazer a opera��o. Tente Novamente.\n");
printf("-------------------------------------------------------\n");
break;
}

}
