#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
float distancia, preco;

printf("<<< Ex020- Preço da Passagem >>>\n\n");
printf("============ TABELA DE PREÇOS ============\n");
printf("Viagens até 200Km\t\tR$0.50/Km.\n");
printf("A partir de 200Km\t\tR$0.35/Km.\n");
printf("------------------------------------------\n");
printf("Distância total da viagem, em Km: ");
scanf("%f", &distancia);

if(distancia<=200){
    preco = distancia * 0.50;
    printf("Uma viagem de %.2f Km vai custar R$0,50/Km.\n", distancia);
    printf("Valor Total: R$%.2f\n", preco);

} else {
preco = distancia * 0.35;
    printf("Uma viagem de %.2f Km vai custar R$0,35/Km.\n", distancia);
    printf("Valor Total: R$%.2f\n", preco);

    }
}

