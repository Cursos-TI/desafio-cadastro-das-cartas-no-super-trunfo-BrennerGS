#include <stdio.h>
#include <locale.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

                char estado[3];
                char codigo_da_carta[4];
                char nome_da_cidade[15];
                int populacao;
                float area;
                float pib;
                int pontos_turisticos;
                //float densidade_populacional;
                //float PIB_per_Capita;

                printf("Digite o Estado:\n");
                scanf("%2s", &estado);

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta);

                printf("Digite o Nome da Cidade\n");
                scanf("%14s", &nome_da_cidade);

                printf("Digite a População:\n");
                scanf("%d", &populacao);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area);

                printf("Digite o PIB:\n");
                scanf("%f", &pib);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos);

                //densidade_populacional = populacao/area;

                //PIB_per_Capita = pib/populacao;

                printf("Cadastro realizado com sucesso!\n");

                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado);
                printf("Código da carta: %s%s\n", estado, codigo_da_carta);
                printf("Nome da Cidade: %s\n", nome_da_cidade);
                printf("População: %d\n", populacao);
                printf("Área: %.2f km²\n", area);
                printf("PIB: %.2f\n", pib);
                printf("Pontos Turísticos: %d\n", pontos_turisticos);
                //printf("Densidade Populacional: %f\n", densidade_populacional);
                //printf("PIB per Capita: %f\n", PIB_per_Capita);

                printf("***************************************************************************\n");


    return 0;
}
