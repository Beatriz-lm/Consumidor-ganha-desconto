#include <stdio.h>
#include <locale.h>
#include <string.h>

void main () {
setlocale(LC_ALL, "Portuguese");
char estado[10];

printf("<<< Ex026 - Qual é o seu estado? >>>\n");
printf("Em que estado do Brasil você nasceu? ");
gets(estado);

if(strcmp(estado ,"RN")==0) {
 printf("Nascendo em %s você é POTIGUAR.\n", estado);
}else if (strcmp(estado, "SP")==0) {
printf("Nascendo em %s você é PAULISTA.\n", estado);
}else if (strcmp(estado , "RJ")==0){
printf("Nascendo em %s você é CARIOCA.\n", estado);
}else if (strcmp(estado , "MG")==0){
printf("Nascendo em %s você é MINEIRO.\n", estado);
}else if (strcmp(estado, "AL")==0){
printf("Nascendo em %s você é ALAGOANO.\n", estado);
}else if (strcmp(estado, "PR")==0){
printf("Nascendo em %s você é PARANAENSE.\n", estado);
}else {
printf("Nascendo em %s você é natural da sua cidade, mas ainda não sei como te chamar!\n", estado);
}





}

