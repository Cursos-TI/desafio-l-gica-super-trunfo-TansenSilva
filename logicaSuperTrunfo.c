#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

#define MAX_NOME 50

typedef struct {
    char codigo[4];
    char nome[MAX_NOME];
    long populacao;
    float area;
    double PIB;
    int pontos_turisticos;
    float densidade_populacional;
    double PIB_per_capita;
    double super_poder;
} Cidade;

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    Cidade cidade1, cidade2;

    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    printf("Digite o código da primeira cidade: ");
    scanf(" %3s", cidade1.codigo);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %49[^"]", cidade1.nome);
    printf("Digite a população de %s: ", cidade1.nome);
    scanf("%ld", &cidade1.populacao);
    printf("Digite a área de %s (em km²): ", cidade1.nome);
    scanf("%f", &cidade1.area);
    printf("Digite o PIB de %s: ", cidade1.nome);
    scanf("%lf", &cidade1.PIB);
    
    printf("\nDigite o código da segunda cidade: ");
    scanf(" %3s", cidade2.codigo);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %49[^"]", cidade2.nome);
    printf("Digite a população de %s: ", cidade2.nome);
    scanf("%ld", &cidade2.populacao);
    printf("Digite a área de %s (em km²): ", cidade2.nome);
    scanf("%f", &cidade2.area);
    printf("Digite o PIB de %s: ", cidade2.nome);
    scanf("%lf", &cidade2.PIB);

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    int escolha;
    printf("\nEscolha um atributo para comparar:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n");
    printf("Digite sua escolha: ");
    scanf("%d", &escolha);

    // Comparação dos atributos selecionados
    switch (escolha) {
        case 1: // Comparando População
            printf("\nComparando População:\n");
            if (cidade1.populacao > cidade2.populacao)
                printf("%s tem mais habitantes que %s.\n", cidade1.nome, cidade2.nome);
            else if (cidade1.populacao < cidade2.populacao)
                printf("%s tem mais habitantes que %s.\n", cidade2.nome, cidade1.nome);
            else
                printf("Ambas as cidades têm a mesma população.\n");
            break;
        case 2: // Comparando Área
            printf("\nComparando Área:\n");
            if (cidade1.area > cidade2.area)
                printf("%s tem uma área maior que %s.\n", cidade1.nome, cidade2.nome);
            else if (cidade1.area < cidade2.area)
                printf("%s tem uma área maior que %s.\n", cidade2.nome, cidade1.nome);
            else
                printf("Ambas as cidades têm a mesma área.\n");
            break;
        case 3: // Comparando PIB
            printf("\nComparando PIB:\n");
            if (cidade1.PIB > cidade2.PIB)
                printf("%s tem um PIB maior que %s.\n", cidade1.nome, cidade2.nome);
            else if (cidade1.PIB < cidade2.PIB)
                printf("%s tem um PIB maior que %s.\n", cidade2.nome, cidade1.nome);
            else
                printf("Ambas as cidades têm o mesmo PIB.\n");
            break;
        default:
            printf("Opção inválida.\n");
    }

    return 0;
}
