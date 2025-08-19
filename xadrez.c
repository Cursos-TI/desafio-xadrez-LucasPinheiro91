#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    int bispo = 1;
do{
printf("Digite quantas casas o bispo deve andar... \n");
    scanf("%d", &bispo);
if(bispo <= 5){
            printf("Bispo andar %d na diagonal superior direita. \n", bispo);
        } else {
                printf("Digite um número de 1 a 5! \n", bispo);
       }
        } while (bispo >= 6);
   printf("Vamos para a próxima peça.  \n");

   int torre = 1;
do{
printf("Digite quantas casas a torre deve andar... \n");
    scanf("%d", &torre);
if(torre <= 5){
            printf("Torre andar %d casas para a direita. \n", torre);
        } else {
                printf("Digite um número de 1 a 5! \n", torre);
       }
        } while (torre >= 6);
   printf("Vamos para a próxima peça.  \n");

   int rainha = 1;
do{
printf("Digite quantas casas a rainha deve andar... \n");
    scanf("%d", &rainha);
if(rainha <= 8){
            printf("Rainha andar %d casas para a esquerda. \n", rainha);
        } else {
                printf("Digite um número de 1 a 8! \n", rainha);
       }
        } while (rainha >= 9);
   printf("Movimentações finalizadas.  \n");
   
    return 0;
}
