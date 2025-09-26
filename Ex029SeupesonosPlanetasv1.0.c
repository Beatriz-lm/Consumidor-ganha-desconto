#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int peso, planeta;

printf("<<< Ex029 - Seu peso nos Planetas v1.0 >>>\n\n");
printf("Seu peso na Terra (Kg) = ");
fflush(stdin);
scanf("%i", &peso);
printf("\n\t ESCOLHA UM PLANETA\n");
printf("\t====================\n");
printf("\t 1\tMercúrio\n\t 2\tVênus\n\t 3\tMarte\n\t 4\tJúpiter\n\t 5\tSaturno\n\t 6\tUrano\n");
printf("\t====================\n");
printf("\tDigite sua opção => ");
fflush(stdin);
scanf("%i", &planeta);

switch(planeta){
    case 1:
    peso = peso * 0.38;
printf("\n----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    case 2:
    peso = peso * 0.91;
printf("\n----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    case 3:
    peso = peso * 0.38;
printf("\n----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    case 4:
    peso = peso * 2.34;
printf("\n----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    case 5:
    peso = peso * 0.93;
printf("\n----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    case 6:
    peso = peso * 0.92;
printf("----------------------------------------------------------------------------\n");
printf("No planeta %i, seu peso seria %i Kg.\n", planeta, peso);
printf("------------------------------------------------------------------------------\n");
printf("VOLTE SEMPRE.\n");
break;

    default:
        printf("------------------------------------------------------------------------------\n");
        printf("Seu peso não pode ser calculado para outros planetas! Tente novamente.\n");
        printf("------------------------------------------------------------------------------\n");
}

}
