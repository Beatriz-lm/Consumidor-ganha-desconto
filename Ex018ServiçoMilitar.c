#include <stdio.h>
#include <locale.h>
#include <time.h>

void main() {
setlocale(LC_ALL, "Portuguese");
int ano;

printf("\n<<< Ex019 - Ano Bissexto >>>\n\n");
printf("Digite um ano qualquer: ");
fflush(stdin);
scanf("%i", &ano);

if((ano%4==0 && ano%100!=0)|| ano%400==0){
  printf("O ano de %i É BISSEXTO.\n", ano);

} else {
printf("O ano %i NÃO É BISSEXTO.\n", ano);
    }

}
