#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    
    int bispo = 1, rainha = 1;
    int movimentoEsquerda = 1;

    printf(" Torre se movimentando na horizontal...\n");
    for (int torre = 1; torre <= 5; torre++)
    {
        printf("Direita\n"); 
    }
    
    printf(" Bispo se movimentando na diagonal...\n");
    while (bispo <= 5)
    {
        printf("Cima\n");
        printf("Direita\n");
        bispo++;
    }
    
    printf("Rainha se movimentando a esquerda...\n");
    do
    {
       printf("Esquerda\n");
       rainha++;
    } while (rainha <= 8);
    
    printf("Cavalo se movimentando duas casas para baixo e uma a esquerda...\n");
    for(int i = 0; i < 2; i++)
    {
        printf("Baixo\n");
        while (i == 1 && movimentoEsquerda > 0)
        {
            printf("Esquerda\n");
            movimentoEsquerda--;
        }
        
        
    }


    return 0;
}
