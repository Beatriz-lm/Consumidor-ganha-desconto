#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
int opcao;
float valor;

printf("<<< Ex030 - Preço por Época >>>\n\n");
printf("Digite o preço de m produto R$");
fflush(stdin);
scanf("%f", &valor);
printf("\t ESCOLHA UM PERÍODO\n");
printf("\t==============================\n");
printf("\t 1\tCarnaval [+10]\n\t 2\tFérias Escolares [+20]\n\t 3\tDia das Crianças [+5]\n\t 4\tBlack Friday [-30]\n\t 5\tNatal [-5]\n");
printf("\t==============================\n");
printf("\t Digite sua opção => ");
fflush(stdin);
scanf("%i", &opcao);

switch (opcao){
case 1:
    valor = valor * 1.10;
printf("-----------------------------------------------------------\n");
printf("Na época do CARNAVAL, o preço do produto vai para R$%.2f\n", valor);
printf("-----------------------------------------------------------\n");
 break;

 case 2:
    valor = valor * 1.20;
printf("--------------------------------------------------------------------\n");
printf("Na época das FÉRIAS ESCOLARES, o preço do produto vai para R$%.2f\n", valor);
printf("--------------------------------------------------------------------\n");
 break;

 case 3:
     valor = valor * 1.05;
printf("-------------------------------------------------------------------\n");
printf("Na época do DIA DAS CRIANÇAS, o preço do produto vai para R$%.2f\n", valor);
printf("-------------------------------------------------------------------\n");
 break;

 case 4:
     valor = valor * 0.70;
printf("---------------------------------------------------------------\n");
printf("Na época do BLACK FRIDAY, o preço do produto vai para R$%.2f\n", valor);
printf("---------------------------------------------------------------\n");
 break;

 case 5:
     valor = valor * 0.95;
printf("--------------------------------------------------------\n");
printf("Na época do NATAL, o preço do produto vai para R$%.2f\n", valor);
printf("--------------------------------------------------------\n");
 break;

 default:
printf("------------------------------------------------------\n");
printf("Em épocas assim, mantenha o preço do produto em R$%i\n", valor);
printf("------------------------------------------------------\n");
}
printf("VOLTE SEMPRE.\n");
}
