#include <stdio.h>

int main() {

    // Carta 1

    char Estado[20];
    char Codigo_da_Carta[20];
    char Nome_da_Cidade[20];
    int Populacao;
    float Area;
    float PIB;
    int Numero_de_Pontos_Turisticos;
    float Densidade_populacional;
    float PIB_per_Capita;
    float SuperPoder;
    int Primeiro_Atributo, Segundo_Atributo;

    // Carta 2

    char Estado1[20];
    char Codigo_da_Carta1[20];
    char Nome_da_Cidade1[20];
    int Populacao1;
    float Area1;
    float PIB1;
    int Numero_de_Pontos_Turisticos1;
    float Densidade_populacional1;
    float PIB_per_Capita1;
    float SuperPoder1;
    int Primeiro_Atributo1, Segundo_Atributo1;

    // Entrada de dados - Carta 1
    printf("Digite o Estado da Carta 1: \n");
    scanf("%19s", Estado);

    printf("Digite o Código da Carta 1: \n");
    scanf("%19s", Codigo_da_Carta);

    printf("Digite o Nome da Cidade 1: \n");
    scanf("%19s", Nome_da_Cidade);

    printf("Digite a População da Cidade 1: \n");
    scanf("%d", &Populacao);

    printf("Digite a Área da Cidade 1: \n");
    scanf("%f", &Area);

    printf("Digite o PIB da Cidade 1: \n");
    scanf("%f", &PIB);

    printf("Digite a Quantidade de Pontos Turísticos da Carta 1: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos);

    Densidade_populacional = Populacao / Area;
    PIB_per_Capita = PIB / Populacao;
    SuperPoder = Area + PIB + PIB_per_Capita + Numero_de_Pontos_Turisticos + (1 / Densidade_populacional);

    printf("\n");

    // Entrada de dados - Carta 2
    printf("Digite o Estado da Carta 2: \n");
    scanf("%19s", Estado1);

    printf("Digite o Código da Carta 2: \n");
    scanf("%19s", Codigo_da_Carta1);

    printf("Digite o Nome da Cidade 2: \n");
    scanf("%19s", Nome_da_Cidade1);

    printf("Digite a População da Cidade 2: \n");
    scanf("%d", &Populacao1);

    printf("Digite a Área da Cidade 2: \n");
    scanf("%f", &Area1);

    printf("Digite o PIB da Cidade 2: \n");
    scanf("%f", &PIB1);

    printf("Digite a Quantidade de Pontos Turísticos da Carta 2: \n");
    scanf("%d", &Numero_de_Pontos_Turisticos1);

    Densidade_populacional1 = Populacao1 / Area1;
    PIB_per_Capita1 = PIB1 / Populacao1;
    SuperPoder1 = Area1 + PIB1 + PIB_per_Capita1 + Numero_de_Pontos_Turisticos1 + (1 / Densidade_populacional1);

    // Impressão das cartas

    printf("\n--- Carta 1 ---\n");
    printf("Estado: %s\n", Estado);
    printf("Código da Carta: %s\n", Codigo_da_Carta);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade);
    printf("População: %d\n", Populacao);
    printf("Área: %.2f km²\n", Area);
    printf("PIB: %.2f bilhões de reais\n", PIB);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita);
    printf("Super Poder: %.2f\n", SuperPoder);

    printf("\n--- Carta 2 ---\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo_da_Carta1);
    printf("Nome da Cidade: %s\n", Nome_da_Cidade1);
    printf("População: %d\n", Populacao1);
    printf("Área: %.2f km²\n", Area1);
    printf("PIB: %.2f bilhões de reais\n", PIB1);
    printf("Número de Pontos Turísticos: %d\n", Numero_de_Pontos_Turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", Densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", PIB_per_Capita1);
    printf("Super Poder: %.2f\n", SuperPoder1);

    // Escolha dos atributos

    printf("\n*** Comparação das Cartas ***\n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos Turísticos\n5. Densidade Populacional\n6. PIB per Capita\n7. Super Poder\n");

    printf("\nEscolha o 1º Atributo da Carta 1:\n");
    scanf("%d", &Primeiro_Atributo);

    printf("Escolha o 1º Atributo da Carta 2:\n");
    scanf("%d", &Primeiro_Atributo1);

     printf("Escolha o 2º Atributo da Carta 1:\n");
    scanf("%d", &Segundo_Atributo);

    printf("Escolha o 2º Atributo da Carta 2:\n");
    scanf("%d", &Segundo_Atributo1);

    // Comparação dos VALORES dos atributos

    float valorAtributoC1_1 = 0.0, valorAtributoC1_2 = 0.0;
    float valorAtributoC2_1 = 0.0, valorAtributoC2_2 = 0.0;

    // Função para extrair valor do atributo

    switch (Primeiro_Atributo) {
        case 1: valorAtributoC1_1 = Populacao; break;
        case 2: valorAtributoC1_1 = Area; break;
        case 3: valorAtributoC1_1 = PIB; break;
        case 4: valorAtributoC1_1 = Numero_de_Pontos_Turisticos; break;
        case 5: valorAtributoC1_1 = Densidade_populacional; break;
        case 6: valorAtributoC1_1 = PIB_per_Capita; break;
        case 7: valorAtributoC1_1 = SuperPoder; break;
        default: printf("Atributo 1 inválido para Carta 1.\n"); break;
    }

    switch (Segundo_Atributo) {
        case 1: valorAtributoC1_2 = Populacao; break;
        case 2: valorAtributoC1_2 = Area; break;
        case 3: valorAtributoC1_2 = PIB; break;
        case 4: valorAtributoC1_2 = Numero_de_Pontos_Turisticos; break;
        case 5: valorAtributoC1_2 = Densidade_populacional; break;
        case 6: valorAtributoC1_2 = PIB_per_Capita; break;
        case 7: valorAtributoC1_2 = SuperPoder; break;
        default: printf("Atributo 2 inválido para Carta 1.\n"); break;
    }

    switch (Primeiro_Atributo1) {
        case 1: valorAtributoC2_1 = Populacao1; break;
        case 2: valorAtributoC2_1 = Area1; break;
        case 3: valorAtributoC2_1 = PIB1; break;
        case 4: valorAtributoC2_1 = Numero_de_Pontos_Turisticos1; break;
        case 5: valorAtributoC2_1 = Densidade_populacional1; break;
        case 6: valorAtributoC2_1 = PIB_per_Capita1; break;
        case 7: valorAtributoC2_1 = SuperPoder1; break;
        default: printf("Atributo 1 inválido para Carta 2.\n"); break;
    }

    switch (Segundo_Atributo1) {
        case 1: valorAtributoC2_2 = Populacao1; break;
        case 2: valorAtributoC2_2 = Area1; break;
        case 3: valorAtributoC2_2 = PIB1; break;
        case 4: valorAtributoC2_2 = Numero_de_Pontos_Turisticos1; break;
        case 5: valorAtributoC2_2 = Densidade_populacional1; break;
        case 6: valorAtributoC2_2 = PIB_per_Capita1; break;
        case 7: valorAtributoC2_2 = SuperPoder1; break;
        default: printf("Atributo 2 inválido para Carta 2.\n"); break;
    }

    float totalCarta1 = valorAtributoC1_1 + valorAtributoC1_2;
    float totalCarta2 = valorAtributoC2_1 + valorAtributoC2_2;

    printf("\n*** Comparando os Atributos Escolhidos ***\n");

    printf("\n");

    printf("Soma dos Atributos da Carta 1: %.2f\n", totalCarta1);
    printf("Soma dos Atributos da Carta 2: %.2f\n", totalCarta2);

    printf("\n");

    if (totalCarta1 > totalCarta2) {
        printf("Carta 1 venceu! (%.2f > %.2f)\n", totalCarta1, totalCarta2);
    } else if (totalCarta2 > totalCarta1) {
        printf("Carta 2 venceu! (%.2f > %.2f)\n", totalCarta2, totalCarta1);
    } else {
        printf("Empate! Ambos os valores somados são %.2f\n", totalCarta1);
    }

printf("\n");

    return 0;


}
