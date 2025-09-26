#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int num;
float inverso;

printf("<<< Ex21 - Inverso ou Oposto >>>\n\n");
printf("Digite um número: ");
fflush(stdin);
scanf("%i", &num);
int oposto = -num;

if(num>0) {
    inverso = 1 / (float)num;
    printf("O inverso de %i é igual a %.2f.\n", num, inverso);

} else {
    printf("O oposto de %i é igual a %i.\n", num, oposto);
    }
}
