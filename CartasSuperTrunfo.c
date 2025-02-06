#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

                //variaveis para armazenar os dados 
                char estado[3];
                char codigo_da_carta[4];
                char nome_da_cidade[15];
                int populacao;
                float area;
                float pib;
                int pontos_turisticos;
                // Nível Aventureiro
                float densidade_populacional;
                float PIB_per_Capita;

                //obtendo os dados 
                printf("Digite o Estado:\n");
                scanf("%2s", &estado);
                getchar();

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta);
                getchar();

                printf("Digite o Nome da Cidade\n");
                fgets(nome_da_cidade, sizeof(nome_da_cidade), stdin);
                nome_da_cidade[strcspn(nome_da_cidade, "\n")] = '\0';

                printf("Digite a População:\n");
                scanf("%d", &populacao);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area);

                printf("Digite o PIB:\n");
                scanf("%f", &pib);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos);
                // Nível Aventureiro
                densidade_populacional = populacao/area;

                PIB_per_Capita = pib/populacao;

                printf("Cadastro realizado com sucesso!\n");

                //apresentando os dados
                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado);
                printf("Código da carta: %s%s\n", estado, codigo_da_carta);
                printf("Nome da Cidade: %s\n", nome_da_cidade);
                printf("População: %d\n", populacao);
                printf("Área: %.2f km²\n", area);
                printf("PIB: %.2f\n", pib);
                printf("Pontos Turísticos: %d\n", pontos_turisticos);
                // Nível Aventureiro
                printf("Densidade Populacional: %f pessoas/km²\n", densidade_populacional);
                printf("PIB per Capita: %f reais\n", PIB_per_Capita);

                printf("***************************************************************************\n");


    return 0;
}
