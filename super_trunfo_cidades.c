#include <stdio.h>
#include <string.h>

// Estrutura para representar uma cidade
struct Cidade {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
};

int main() {
    struct Cidade cidade1, cidade2;

    // Cadastro da primeira cidade
    printf("Cadastro da Cidade 1:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", cidade1.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^
]", cidade1.nome);
    printf("Digite a população: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade1.pib);

    // Cadastro da segunda cidade
    printf("\nCadastro da Cidade 2:\n");
    printf("Digite o código da cidade: ");
    scanf("%s", cidade2.codigo);
    printf("Digite o nome da cidade: ");
    scanf(" %[^
]", cidade2.nome);
    printf("Digite a população: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área (km²): ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB (em bilhões): ");
    scanf("%f", &cidade2.pib);

    // Comparações
    printf("\n--- Comparação das Cidades ---\n");

    // População
    if (cidade1.populacao > cidade2.populacao) {
        printf("Cidade com maior população: %s\n", cidade1.nome);
    } else if (cidade2.populacao > cidade1.populacao) {
        printf("Cidade com maior população: %s\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }

    // Área
    if (cidade1.area > cidade2.area) {
        printf("Cidade com maior área: %s\n", cidade1.nome);
    } else if (cidade2.area > cidade1.area) {
        printf("Cidade com maior área: %s\n", cidade2.nome);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }

    // PIB
    if (cidade1.pib > cidade2.pib) {
        printf("Cidade com maior PIB: %s\n", cidade1.nome);
    } else if (cidade2.pib > cidade1.pib) {
        printf("Cidade com maior PIB: %s\n", cidade2.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }

    return 0;
}
