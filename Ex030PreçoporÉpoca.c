#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int opcao;
float valor;

printf("<<< Ex030 - Pre�o por �poca >>>\n\n");
printf("Digite o pre�o de m produto R$");
fflush(stdin);
scanf("%f", &valor);
printf("\t ESCOLHA UM PER�ODO\n");
printf("\t==============================\n");
printf("\t 1\tCarnaval [+10]\n\t 2\tF�rias Escolares [+20]\n\t 3\tDia das Crian�as [+5]\n\t 4\tBlack Friday [-30]\n\t 5\tNatal [-5]\n");
printf("\t==============================\n");
printf("\t Digite sua op��o => ");
fflush(stdin);
scanf("%i", &opcao);

switch (opcao){
case 1:
    valor = valor * 1.10;
printf("-----------------------------------------------------------\n");
printf("Na �poca do CARNAVAL, o pre�o do produto vai para R$%.2f\n", valor);
printf("-----------------------------------------------------------\n");
 break;

 case 2:
    valor = valor * 1.20;
printf("--------------------------------------------------------------------\n");
printf("Na �poca das F�RIAS ESCOLARES, o pre�o do produto vai para R$%.2f\n", valor);
printf("--------------------------------------------------------------------\n");
 break;

 case 3:
     valor = valor * 1.05;
printf("-------------------------------------------------------------------\n");
printf("Na �poca do DIA DAS CRIAN�AS, o pre�o do produto vai para R$%.2f\n", valor);
printf("-------------------------------------------------------------------\n");
 break;

 case 4:
     valor = valor * 0.70;
printf("---------------------------------------------------------------\n");
printf("Na �poca do BLACK FRIDAY, o pre�o do produto vai para R$%.2f\n", valor);
printf("---------------------------------------------------------------\n");
 break;

 case 5:
     valor = valor * 0.95;
printf("--------------------------------------------------------\n");
printf("Na �poca do NATAL, o pre�o do produto vai para R$%.2f\n", valor);
printf("--------------------------------------------------------\n");
 break;

 default:
printf("------------------------------------------------------\n");
printf("Em �pocas assim, mantenha o pre�o do produto em R$%i\n", valor);
printf("------------------------------------------------------\n");
}
printf("VOLTE SEMPRE.\n");
}
