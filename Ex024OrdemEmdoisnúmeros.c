#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int primeiro, segundo;

printf("<<< Ex024 - Ordem em dois n�meros >>>\n");
printf("Me diga dois n�meros e eu colocarei\nem ordem crescente.\n\n");
printf("Primeiro n�mero: ");
fflush(stdin);
scanf(" %i", &primeiro);
printf("Segundo n�mero: ");
fflush(stdin);
scanf(" %i", &segundo);

if (primeiro<segundo){
    printf("Os n�meros em ordem s�o %i e %i.\n", primeiro, segundo);
        }else if (segundo<primeiro) {
        printf("Os n�meros em ordem s�o %i e %i.\n", segundo, primeiro);
            }else{
            printf("Os n�meros s�o iguais.\n");
        }
}
