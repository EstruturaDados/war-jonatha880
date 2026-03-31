#include <stdio.h>
#include <string.h>

// Definição da struct Territorio
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main() {

    // Vetor de territórios já preenchido (Território 1 ao 5)
    Territorio territorios[5] = {
        {"America",  "Azul",     3},
        {"Europa",   "Verde",    3},
        {"Asia",     "Vermelha", 5},
        {"Africa",   "Amarelo",  4},
        {"Oceania",  "Branca",   2}
    };

    printf("=============================================\n");
    printf("DADOS DOS TERRITORIOS DO MUNDO\n");
    printf("=============================================\n\n");

    // Exibição dos territórios
    for (int i = 0; i < 5; i++) {
        printf("TERRITORIO %d:\n", i + 1);
        printf("- Nome: %s\n", territorios[i].nome);
        printf("- Dominado por: Exercito %s\n", territorios[i].cor);
        printf("- Tropas: %d\n\n", territorios[i].tropas);
    }

    return 0;
}