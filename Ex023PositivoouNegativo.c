#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int numero;

printf("<<< Ex023 - Positivo ou Negativo >>>\n\n");
printf("Me diga um n�mero e eu te direi se\nele � POSITIVO, NEGATIVO ou NULO.\n\n");
printf("Digite um n�mero: ");
fflush(stdin);
scanf("%i",&numero);

if (numero>0) {
    printf("O valor %i digitado � POSITIVO.\n", numero);
        }else if (numero<0){
            printf("O valor %i digitado � NEGATIVO.\n", numero);
            }else{
                printf("O valor %i digitado � NULO.\n", numero);
    }

}
