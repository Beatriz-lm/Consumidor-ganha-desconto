#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int numero;

printf("<<< Ex023 - Positivo ou Negativo >>>\n\n");
printf("Me diga um número e eu te direi se\nele é POSITIVO, NEGATIVO ou NULO.\n\n");
printf("Digite um número: ");
fflush(stdin);
scanf("%i",&numero);

if (numero>0) {
    printf("O valor %i digitado é POSITIVO.\n", numero);
        }else if (numero<0){
            printf("O valor %i digitado é NEGATIVO.\n", numero);
            }else{
                printf("O valor %i digitado é NULO.\n", numero);
    }

}
