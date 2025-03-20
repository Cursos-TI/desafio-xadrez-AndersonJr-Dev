/**
 * Programa: Simulação de Movimentos de Peças de Xadrez
 * Descrição: Este programa simula o movimento de três peças de xadrez (Torre, Bispo e Rainha)
 */

#include <stdio.h>

// Função para o movimento da Torre (usando recursividade)
void movimentoTorre(int torre)
{
    if (torre > 0) // Condição de parada
    {
        printf("Direita\n");
        movimentoTorre(torre - 1); // Chamada recursiva para o próximo movimento
    }
}

// Função para o movimento do Bispo (usando recursividade e loops aninhados)
void movimentoBispoComLoops(int movimentos)
{
    if (movimentos > 0) // Condição de parada
    {
        printf("Cima\n");           // Movimento vertical (subindo)
        for (int i = 0; i < 1; i++) // Loop para o movimento horizontal
        {
            printf("Direita\n"); // Movimento horizontal (para a direita)
        }
        movimentoBispoComLoops(movimentos - 1); // Chamada recursiva para o próximo movimento
    }
}

// Função para o movimento da Rainha (usando recursividade)
void movimentoRainha(int rainha)
{
    if (rainha > 0) // Condição de parada
    {
        printf("Esquerda\n");
        movimentoRainha(rainha - 1); // Chamada recursiva para o próximo movimento
    }
}

int main()
{
    // Definição das constantes para o número de casas a serem movidas
    const int torre = 5;  // Torre move 5 casas para a direita
    const int bispo = 5;  // Bispo move 5 casas na diagonal (cima e direita)
    const int rainha = 8; // Rainha move 8 casas para a esquerda
    const int cavalo = 3; // Cavalo move 3 casas em L (cima, cima, direita)

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    movimentoTorre(torre);
    printf("\n");

    // Movimento do Bispo (usando recursividade e loops aninhados)
    printf("Movimento do Bispo:\n");
    movimentoBispoComLoops(bispo);
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    movimentoRainha(rainha);
    printf("\n");

    // Movimento do Cavalo (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    for (int j = 0; j < 3; j++) // Loop para simular o movimento em "L"
    {
        if (j < 2)
        {
            printf("Cima\n"); // Duas casas para cima
        }
        else if (j == 2)
        {
            printf("Direita\n"); // Uma casa para a direita
        }
    }

    return 0;
}
