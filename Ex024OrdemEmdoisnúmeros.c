#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int primeiro, segundo;

printf("<<< Ex024 - Ordem em dois números >>>\n");
printf("Me diga dois números e eu colocarei\nem ordem crescente.\n\n");
printf("Primeiro número: ");
fflush(stdin);
scanf(" %i", &primeiro);
printf("Segundo número: ");
fflush(stdin);
scanf(" %i", &segundo);

if (primeiro<segundo){
    printf("Os números em ordem são %i e %i.\n", primeiro, segundo);
        }else if (segundo<primeiro) {
        printf("Os números em ordem são %i e %i.\n", segundo, primeiro);
            }else{
            printf("Os números são iguais.\n");
        }
}
