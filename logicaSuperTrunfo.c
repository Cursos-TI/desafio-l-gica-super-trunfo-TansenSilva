#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Nível Mestre - Comparação de Dois Atributos com Lógica Avançada e Menus Dinâmicos

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

void cadastrar_cidades(Cidade *cidade1, Cidade *cidade2) {
    // Cadastro das Cartas:
    printf("Digite o código da primeira cidade: ");
    scanf(" %3s", cidade1->codigo);
    printf("Digite o nome da primeira cidade: ");
    scanf(" %49[^"]", cidade1->nome);
    printf("Digite a população de %s: ", cidade1->nome);
    scanf("%ld", &cidade1->populacao);
    printf("Digite a área de %s (em km²): ", cidade1->nome);
    scanf("%f", &cidade1->area);
    printf("Digite o PIB de %s: ", cidade1->nome);
    scanf("%lf", &cidade1->PIB);
    
    printf("\nDigite o código da segunda cidade: ");
    scanf(" %3s", cidade2->codigo);
    printf("Digite o nome da segunda cidade: ");
    scanf(" %49[^"]", cidade2->nome);
    printf("Digite a população de %s: ", cidade2->nome);
    scanf("%ld", &cidade2->populacao);
    printf("Digite a área de %s (em km²): ", cidade2->nome);
    scanf("%f", &cidade2->area);
    printf("Digite o PIB de %s: ", cidade2->nome);
    scanf("%lf", &cidade2->PIB);
}

void comparar_atributos(Cidade cidade1, Cidade cidade2) {
    int escolhaAtributo1, escolhaAtributo2;
    printf("\nEscolha dois atributos para comparar (0 para sair):\n");
    printf("1 - População\n2 - Área\n3 - PIB\n");
    printf("Digite o primeiro atributo: ");
    scanf("%d", &escolhaAtributo1);
    printf("Digite o segundo atributo: ");
    scanf("%d", &escolhaAtributo2);

    if (escolhaAtributo1 == escolhaAtributo2) {
        printf("\nEscolha dois atributos diferentes para comparar.\n");
        return;
    }

    if (escolhaAtributo1 == 1 && escolhaAtributo2 == 2) {
        printf("\nComparando População e Área:\n");
        printf("População: %s tem %ld habitantes e %s tem %ld habitantes.\n", cidade1.nome, cidade1.populacao, cidade2.nome, cidade2.populacao);
        printf("Área: %s tem %.2f km² e %s tem %.2f km².\n", cidade1.nome, cidade1.area, cidade2.nome, cidade2.area);
        printf("Resultado da comparação: %s\n", 
            (cidade1.populacao > cidade2.populacao && cidade1.area > cidade2.area) ? cidade1.nome :
            (cidade1.populacao < cidade2.populacao && cidade1.area < cidade2.area) ? cidade2.nome : "Empate");

    } else if (escolhaAtributo1 == 1 && escolhaAtributo2 == 3) {
        printf("\nComparando População e PIB:\n");
        printf("População: %s tem %ld habitantes e %s tem %ld habitantes.\n", cidade1.nome, cidade1.populacao, cidade2.nome, cidade2.populacao);
        printf("PIB: %s tem um PIB de %.2f e %s tem um PIB de %.2f.\n", cidade1.nome, cidade1.PIB, cidade2.nome, cidade2.PIB);
        printf("Resultado da comparação: %s\n", 
            (cidade1.populacao > cidade2.populacao && cidade1.PIB > cidade2.PIB) ? cidade1.nome :
            (cidade1.populacao < cidade2.populacao && cidade1.PIB < cidade2.PIB) ? cidade2.nome : "Empate");

    } else if (escolhaAtributo1 == 2 && escolhaAtributo2 == 3) {
        printf("\nComparando Área e PIB:\n");
        printf("Área: %s tem %.2f km² e %s tem %.2f km².\n", cidade1.nome, cidade1.area, cidade2.nome, cidade2.area);
        printf("PIB: %s tem um PIB de %.2f e %s tem um PIB de %.2f.\n", cidade1.nome, cidade1.PIB, cidade2.nome, cidade2.PIB);
        printf("Resultado da comparação: %s\n", 
            (cidade1.area > cidade2.area && cidade1.PIB > cidade2.PIB) ? cidade1.nome :
            (cidade1.area < cidade2.area && cidade1.PIB < cidade2.PIB) ? cidade2.nome : "Empate");

    } else {
        printf("Opção inválida.\n");
    }
}

int main() {
    Cidade cidade1, cidade2;
    int opcao;

    do {
        // Menu interativo
        printf("\nMenu de Opções:\n");
        printf("1 - Cadastrar Cidades\n");
        printf("2 - Comparar Atributos\n");
        printf("3 - Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch(opcao) {
            case 1:
                cadastrar_cidades(&cidade1, &cidade2);
                break;
            case 2:
                if (cidade1.populacao == 0 || cidade2.populacao == 0) {
                    printf("\nPor favor, cadastre as cidades primeiro.\n");
                } else {
                    comparar_atributos(cidade1, cidade2);
                }
                break;
            case 3:
                printf("Saindo...\n");
                break;
            default:
                printf("Opção inválida, tente novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}
