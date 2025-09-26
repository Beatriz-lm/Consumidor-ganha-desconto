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
printf("+\tAdição\n-\tSubtração\n*\tMultiplicação\n/\tDivisão\n");
printf("============================\n");
printf("Digite sua opção => ");
fflush(stdin);
scanf("%c", &conta);

switch(conta){
case '+':
total = primeiro + segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i é igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '-':
total = primeiro - segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i é igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '*':
total = primeiro * segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i é igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

case '/':
total = primeiro / segundo;
printf("-------------------------------------\n");
printf("O resultado de %i + %i é igual a %i\n", primeiro, segundo, total);
printf("-------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

default:
printf("-------------------------------------------------------\n");
printf("Não foi possível fazer a operação. Tente Novamente.\n");
printf("-------------------------------------------------------\n");
break;
}

}
