#include <stdio.h>

//Uso recursivo para movimenta a torre 5 casas a direita.
void moverTorre( int casas){
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas - 1);
    }
}
// Uso recursivo + loops aninhados para gerar movimento bispo.
void moverBispo(int casas){
    for (int i = 0; i < casas; i++)
    {
        printf("Cima\n");
        for (int j = 0; j < 1; j++)
        {
            printf("Direita\n");
        }
        
    }
    
}
//Uso recursivo movimentação rainha!
void moverRainha(int casas){
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas - 1);
    }
}

int main() {
    
    int casas = 5;
    int casasRainha = 7;
    int quantidadeCasasCavalo = 3;
    int movimentosHorizontais = 1;
    int movimentosVerticais = 2;

    printf("Torre se movimentando na horizontal... %d vezes\n", casas);
    printf("\n");
    moverTorre(casas);
    printf("\n");

    printf("Bispo se movimentando na diagonal... %d vezes\n", casas);
    printf("\n");
    moverBispo(casas);
    printf("\n");

    printf("Rainha se movimentando a esquerda... %d vezes\n", casasRainha);
    printf("\n");
    moverRainha(casasRainha);
    printf("\n");

    printf("Cavalo se movimentando em L... %d Casas\n", quantidadeCasasCavalo);
        for (int i = 0; i < movimentosVerticais; i++)
        {
            printf("Cima\n");
            if (i == movimentosVerticais - 1)
            {
            printf("Direita\n");
            }
        }

    return 0;
}
