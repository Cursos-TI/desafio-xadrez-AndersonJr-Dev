#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.
    // Definição das constantes para o número de casas a serem movidas
    const int torre = 5;  // Torre move 5 casas para a direita
    const int bispo = 5;  // Bispo move 5 casas na diagonal (cima e direita)
    const int rainha = 8; // Rainha move 8 casas para a esquerda
    const int cavalo = 3; // Cavalo move 3 casas em L
    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
        // Movimento do Bispo (usando while)
    printf("=== Movimento do Bispo ===\n");
    i = 0;
    while (i < bispo)
    {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");
    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
        // Variável para controle dos loops
    int i;

    // Movimento da Torre (usando for)
    printf("=== Movimento da Torre ===\n");
    for (i = 0; i < torre; i++)
    {
        printf("Direita\n");
    }

    printf("\n");
    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    // Movimento da Rainha (usando do-while)
    printf("=== Movimento da Rainha ===\n");
    i = 0;
    do
    {
        printf("Esquerda\n");
        i++;
    } while (i < rainha);

    printf("\n");
    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.
        // Movimento do Cavalo baixo, baixo, direita (usando for aninhado)
    printf("=== Movimento do Cavalo ===\n");
    for (i = 0; i < 1; i++) // Executa apenas uma vez
    {
        int j = 0;
        while (j < 2) // Movimento "Baixo" duas vezes
        {
            printf("Baixo\n");
            j++;
        }
        printf("Esquerda\n"); // Movimento "Esquerda" uma vez
    }
    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
