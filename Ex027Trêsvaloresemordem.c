#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int primeiro, segundo, terceiro;

printf("<<< Ex027 - Três valores em ordem >>>\n\n");
printf("Me diga três números e eu colocarei\neles em ordem para você.\n\n");
printf("Primeiro número: ");
fflush(stdin);
scanf("%i", &primeiro);
printf("Segundo número: ");
fflush(stdin);
scanf("%i", &segundo);
printf("Terceiro número: ");
fflush(stdin);
scanf("%i", &terceiro);
printf("----------------------------\n");
int mai, inter, menor;

if (primeiro>segundo&&primeiro>terceiro){
    printf("MAIOR: %i \n", primeiro);

    }else if (segundo>primeiro&&segundo>terceiro){
        printf("MAIOR: %i \n", segundo);

        }else {
            printf("MAIOR: %i \n", terceiro);
    }

if ((primeiro<segundo&&primeiro>terceiro) || (primeiro>segundo&&primeiro<terceiro)){
    printf("INTERMEDIÁRIO: %i\n", primeiro);

    }else if ((segundo<primeiro&&segundo>terceiro) || (segundo>primeiro&&segundo<terceiro)){
        printf("INTERMEDIÁRIO: %i\n", segundo);

        }else{
        printf("INTERMEDIÁRIO: %i\n", terceiro);
    }

if (primeiro<segundo&&primeiro<terceiro){
    printf("MENOR: %i\n", primeiro);

    }else if (segundo<primeiro&&segundo<terceiro){
        printf("MENOR: %i\n", segundo);

        }else{
        printf("MENOR: %i\n", terceiro);
    }

}


