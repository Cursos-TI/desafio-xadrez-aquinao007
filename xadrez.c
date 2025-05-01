#include <stdio.h>

// quantidade de casas
#define BISPO_MOV 5
#define TORRE_MOV 5
#define RAINHA_MOV 8

int main() {
    
    // Movimento do BISPO
    // Utiliza estrutura for
    printf("Movimento do Bispo:\n");
    for (int i = 0; i < BISPO_MOV; i++) {
        // Movimento diagonal superior esquerda = Cima + esquerda
        printf("Cima\n");
        printf("esquerda\n");
    }

    // Movimento da TORRE
    // estrutura while
    printf("Movimentaçao da Torre:\n");
    int t = 0;
    while (t < TORRE_MOV) {
        // Movimento para a direita
        printf("Direita\n");
        t++;
    }


    // Movimento da RAINHA
    // estrutura do-while
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        // Movimento para a esquerda
        printf("Esquerda\n");
        r++;
    } while (r < RAINHA_MOV);

    return 0;
}
