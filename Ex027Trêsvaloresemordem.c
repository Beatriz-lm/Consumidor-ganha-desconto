#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int primeiro, segundo, terceiro;

printf("<<< Ex027 - Tr�s valores em ordem >>>\n\n");
printf("Me diga tr�s n�meros e eu colocarei\neles em ordem para voc�.\n\n");
printf("Primeiro n�mero: ");
fflush(stdin);
scanf("%i", &primeiro);
printf("Segundo n�mero: ");
fflush(stdin);
scanf("%i", &segundo);
printf("Terceiro n�mero: ");
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
    printf("INTERMEDI�RIO: %i\n", primeiro);

    }else if ((segundo<primeiro&&segundo>terceiro) || (segundo>primeiro&&segundo<terceiro)){
        printf("INTERMEDI�RIO: %i\n", segundo);

        }else{
        printf("INTERMEDI�RIO: %i\n", terceiro);
    }

if (primeiro<segundo&&primeiro<terceiro){
    printf("MENOR: %i\n", primeiro);

    }else if (segundo<primeiro&&segundo<terceiro){
        printf("MENOR: %i\n", segundo);

        }else{
        printf("MENOR: %i\n", terceiro);
    }

}


