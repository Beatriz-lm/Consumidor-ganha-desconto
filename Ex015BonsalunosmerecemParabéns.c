#include <stdio.h>
#include <locale.h>

void main(){
setlocale(LC_ALL, "Portuguese");
float nota1, nota2, media;

printf("<<< Ex015 - Bons alunos merecem parabéns >>>\n\n");
printf("Digite sua primeira nota: ");
scanf("%f", &nota1);
printf("Digite sua segunda nota: ");
scanf("%f", &nota2);

media = (nota1 + (int)nota2) / 2;

if (media>=7) {
printf("\n-----------------------------------------\n");
printf("MEUS PARABÉNS! A sua média final foi %.1f\n", media);
printf("\n-----------------------------------------\n");
}

if (media<7){
    printf("\n-----------------------------------------\n");
printf("A sua média final foi %.1f\n", media);
printf("\n-----------------------------------------\n");
    }

}
