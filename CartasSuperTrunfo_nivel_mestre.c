#include <stdio.h>

int main() {
    int carta1, carta2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, media, densidade1, densidade2;
    float inverso_densidade1, inverso_densidade2, pibper_capita1, pibper_capita2;
    double super_poder1, super_poder2;
    char estado1[50], codigo_carta1[50];
    char estado2[50], codigo_carta2[50];
    

    printf("Digite o código da carta 1:\n");
    scanf("%s" , codigo_carta1);   

    printf("Digite o estado da carta 1:\n");
    scanf("%s" , estado1);

    printf("Digite a populção do estado da carta 1:\n");
    scanf("%d" , &populacao1);

    printf("Digite a área do estado da carta 1:\n");
    scanf("%f" , &area1);

    printf("Digite o PIB do estado da carta 1:\n");
    scanf("%f" , &pib1);

    printf("Digite a quantidade de pontos turísticos do estado da carta 1: \n");
    scanf("%d" , &pontos_turisticos1);

    densidade1 = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f\n", densidade1);
    
    pibper_capita1 = (float)(pib1 * 1000000000.0) / populacao1;
    printf("Pib per capital é: %.2f\n", pibper_capita1);

    inverso_densidade1 = area1 / densidade1;
    printf("O inverso da densidade populacional é: %.2f\n", inverso_densidade1);

    super_poder1 = (double)populacao1 + area1 + (pib1 * 1000000000.0) + pontos_turisticos1 +pibper_capita1 + inverso_densidade1;
    printf("O super poder da carta 1 é: %.2f\n", super_poder1);

   //pular duas linhas para melhor visualizacao
    printf("\n\n");

    printf("Digite o código da carta 2:\n");
    scanf("%s" , codigo_carta2);   

    printf("Digite o estado da carta 2:\n");
    scanf("%s" , estado2);

    printf("Digite a populção do estado da carta 2:\n");
    scanf("%d" , &populacao2);

    printf("Digite a área do estado da carta 2:\n");
    scanf("%f" , &area2);

    printf("Digite o PIB do estado da carta 2:\n");
    scanf("%f" , &pib2);

    printf("Digite a quantidade de pontos turísticos do estado da carta 2: \n");
    scanf("%d" , &pontos_turisticos2);

    densidade2 = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f\n", densidade2);

    pibper_capita2 = (float)(pib2 * 1000000000.0) / populacao2;
    printf("Pib per capital é: %.2f\n", pibper_capita2);

    inverso_densidade2 = area2 / densidade2;
    printf("O inverso da densidade populacional é: %.2f\n", inverso_densidade2);

    super_poder2 = (float)populacao2 + area2 + (pib2 * 1000000000.0) + pontos_turisticos2 +pibper_capita2 + inverso_densidade2;
    printf("O super poder da carta 2 é: %.2f\n", super_poder2);
 
    printf("Carta 1 - Código: %s, Estado: %s\n  População: %d, Área: %.2f\n  PIB: %.2f, Pontos Turísticos: %d\n  Densidade populacional: %.2f, Pib per capital: %.2f\n inverso da densidade: %.2f, super poder1: %.2f", codigo_carta1, estado1, populacao1, area1, pib1, pontos_turisticos1, (float)populacao1 / area1, (float)(pib1 * 1000000000.0) / populacao1, inverso_densidade1, super_poder1);
    //pular linhas para melhor visualizacao
    printf("\n");
    printf("Carta 2 - Código: %s, Estado: %s\n  População: %d, Área: %.2f\n  PIB: %.2f, Pontos Turísticos: %d\n  Densidade populacional: %.2f, Pib per capital: %.2f\n inverso da densidade: %.2f, super poder: %.2f", codigo_carta2, estado2, populacao2, area2, pib2, pontos_turisticos2, (float)populacao2 / area2, (float)(pib2 * 1000000000.0) / populacao2, inverso_densidade2, super_poder2);

    //pular linhas para melhor visualizacao
    printf("\n\n");
    
    printf("Dados carta 1\n");
    printf("população1 > população2: %d\n", populacao1 > populacao2);
    printf("área1 > área2: %d\n", area1 > area2);
    printf("pib1 > pib2: %d\n", pib1 > pib2);
    printf("pontos_turisticos1 > pontos_turisticos2: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("densidade1 > densidade2: %d\n", densidade1 > densidade2);
    printf("pibper_capita1 > pibper_capita2: %d\n", pibper_capita1 > pibper_capita2);
    printf("inverso_densidade1 > inverso_densidade2: %d\n", inverso_densidade1 > inverso_densidade2);
    printf("super_poder1 > super_poder2: %d\n", super_poder1 > super_poder2);

    printf("\n");

    printf("Dados carta 2\n");
    printf("população2 > população1: %d\n", populacao2 > populacao1);
    printf("área2 > área1: %d\n", area2 > area1);
    printf("pib2 > pib1: %d\n", pib2 > pib1);
    printf("pontos_turisticos2 > pontos_turisticos1: %d\n", pontos_turisticos2 > pontos_turisticos1);
    printf("densidade2 > densidade1: %d\n", densidade2 > densidade1);
    printf("pibper_capita2 > pibper_capita1: %d\n", pibper_capita2 > pibper_capita1);
    printf("inverso_densidade2 > inverso_densidade1: %d\n", inverso_densidade2 > inverso_densidade1);
    printf("super_poder2 > super_poder1: %d\n", super_poder2 > super_poder1);

    printf("\n\n");

    printf("Carta1 venceu: %d\n", super_poder1 > super_poder2);
    printf("Carta2 venceu: %d\n", super_poder2 > super_poder1);
    printf("Empate: %d\n", super_poder1 == super_poder2);

    return 0;
}