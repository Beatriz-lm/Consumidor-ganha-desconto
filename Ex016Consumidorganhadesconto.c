#include <stdio.h>
#include <locale.h>

void main () {
setlocale(LC_ALL, "Portuguese");
float vcompras, desconto, pagamento;

printf("<<< Ex016 - Consumidor ganha desconto >>>\n\n");
printf("Qual foi o valor total das compras? R$");
scanf("%f", &vcompras);

if(vcompras<500){
 printf("Voc� comprou R$%.2f na nossa loja.\nVolte sempre!", vcompras);
}

if (vcompras>=500) {
    desconto = (vcompras * 10) / 100;
    pagamento = vcompras - desconto;
printf("\n====================ATEN��O====================\n");
printf("Por fazer mais de R$500,00 em compras, \nvoc� vai receber R$%.2f de desconto.\nO valor a ser pago � R$%.2f! Volte sempre!\n", desconto, pagamento);
printf("---------------------------------------------\n");
    }

}
