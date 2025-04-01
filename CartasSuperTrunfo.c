#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese_Brazil.1252");

                // variaveis Carta 1
                char estado_carta01[3];
                char codigo_da_carta01[4];
                char nome_da_cidade_carta01[15];
                int populacao_carta01;
                float area_carta01;
                float pib_carta01;
                int pontos_turisticos_carta01;
                float densidade_populacional_carta01;
                float PIB_per_Capita_carta01;
                float SuperPoder_carta01;

                // Cadastro da Carta 1
                printf("Digite o Estado:\n");
                scanf("%2s", &estado_carta01);

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta01);

                printf("Digite o Nome da Cidade\n");
                scanf("%14s", &nome_da_cidade_carta01);

                printf("Digite a População:\n");
                scanf("%d", &populacao_carta01);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area_carta01);

                printf("Digite o PIB:\n");
                scanf("%f", &pib_carta01);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos_carta01);

                densidade_populacional_carta01 = populacao_carta01/area_carta01;

                PIB_per_Capita_carta01 = pib_carta01/populacao_carta01;

                SuperPoder_carta01 = populacao_carta01 + area_carta01 + pib_carta01 + pontos_turisticos_carta01 + (1 / densidade_populacional_carta01) + (1 / PIB_per_Capita_carta01);

                printf("Cadastro realizado com sucesso!\n");

                // imprimindo resultados Carta 1
                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado_carta01);
                printf("Código da carta: %s%s\n", estado_carta01, codigo_da_carta01);
                printf("Nome da Cidade: %s\n", nome_da_cidade_carta01);
                printf("População: %d\n", populacao_carta01);
                printf("Área: %.2f km²\n", area_carta01);
                printf("PIB: %.2f bilhões de reais\n", pib_carta01);
                printf("Pontos Turísticos: %d\n", pontos_turisticos_carta01);
                printf("Densidade Populacional: %f\n", densidade_populacional_carta01);
                printf("PIB per Capita: %f\n", PIB_per_Capita_carta01);

                printf("Super Poder: %f\n", SuperPoder_carta01);

                printf("***************************************************************************\n");

                // variaveis Carta 2
                char estado_carta02[3];
                char codigo_da_carta02[4];
                char nome_da_cidade_carta02[15];
                int populacao_carta02;
                float area_carta02;
                float pib_carta02;
                int pontos_turisticos_carta02;
                float densidade_populacional_carta02;
                float PIB_per_Capita_carta02;
                float SuperPoder_carta02;

                // Cadastro da Carta 2
                printf("Digite o Estado:\n");
                scanf("%2s", &estado_carta02);

                printf("Digite o Código da carta\n");
                scanf("%3s", &codigo_da_carta02);

                printf("Digite o Nome da Cidade\n");
                scanf("%14s", &nome_da_cidade_carta02);

                printf("Digite a População:\n");
                scanf("%d", &populacao_carta02);

                printf("Digite a Área (em km²):\n");
                scanf("%f", &area_carta02);

                printf("Digite o PIB:\n");
                scanf("%f", &pib_carta02);

                printf("Digite o Número de Pontos Turísticos:\n");
                scanf("%d", &pontos_turisticos_carta02);

                densidade_populacional_carta02 = populacao_carta02/area_carta02;

                PIB_per_Capita_carta02 = pib_carta02/populacao_carta02;

                SuperPoder_carta02 = populacao_carta02 + area_carta02 + pib_carta02 + pontos_turisticos_carta02 + (1 / densidade_populacional_carta02) + (1 / PIB_per_Capita_carta02);

                printf("Cadastro realizado com sucesso!\n");

                // imprimindo resultados Carta 2
                printf("***************************************************************************\n");
                printf("Estado: %s\n", estado_carta02);
                printf("Código da carta: %s%s\n", estado_carta02, codigo_da_carta02);
                printf("Nome da Cidade: %s\n", nome_da_cidade_carta02);
                printf("População: %d\n", populacao_carta02);
                printf("Área: %.2f km²\n", area_carta02);
                printf("PIB: %.2f bilhões de reais\n", pib_carta02);
                printf("Pontos Turísticos: %d\n", pontos_turisticos_carta02);
                printf("Densidade Populacional: %f\n", densidade_populacional_carta02);
                printf("PIB per Capita: %f\n", PIB_per_Capita_carta02);

                printf("Super Poder: %f\n", SuperPoder_carta02);

                printf("***************************************************************************\n");

                int resultado_populacao;
                int resultado_area;
                int resultado_pib;
                int resultado_pontos_turisticos;
                int resultado_densidade_populacional;
                int resultado_PIB_per_Capita;
                int resultado_SuperPoder;

                // Comparação entre as cartas
                resultado_populacao = populacao_carta01 < populacao_carta02;
                resultado_area = area_carta01 < area_carta02;
                resultado_pib = pib_carta01 < pib_carta02;
                resultado_pontos_turisticos = pontos_turisticos_carta01 < pontos_turisticos_carta02;
                resultado_densidade_populacional = densidade_populacional_carta01 > densidade_populacional_carta02;
                resultado_PIB_per_Capita = PIB_per_Capita_carta01 > PIB_per_Capita_carta02;
                resultado_SuperPoder = SuperPoder_carta01 < SuperPoder_carta02;

                // Imprimindo resultado final
                printf("Resultado População: %d\n", resultado_populacao);
                printf("Resultado Área: %d\n", resultado_area);
                printf("Resultado Pib: %d\n", resultado_pib);
                printf("Resultado Pontos Turisticos: %d\n", resultado_pontos_turisticos);
                printf("Resultado Densidade Populacional: %d\n", resultado_densidade_populacional);
                printf("Resultado PIB per Capita: %d\n", resultado_PIB_per_Capita);
                printf("Resultado SuperPoder: %d\n", resultado_SuperPoder);


    return 0;
}
