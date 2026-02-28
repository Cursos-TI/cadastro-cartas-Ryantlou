#include <stdio.h>

int main() {
    int carta1, carta2;
    int populacao1, populacao2, pontos_turisticos1, pontos_turisticos2;
    float area1, area2, pib1, pib2, media;
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

    media = (float)populacao1 / area1;
    printf("A densidade populacional é: %.2f\n", media);
    
    media = (float)(pib1 * 1000000000.0) / populacao1;
    printf("Pib per capital é: %.2f\n", media);

    //pular duas linhas para melhor visualizacao
    printf("\n\n");

    printf("Digite o código da carta 2: \n");
    scanf("%s" , codigo_carta2);

    printf("Digite o nome do estado da carta 2: \n");
    scanf("%s" , estado2);

    printf("Digite a populção do estado da carta 2: \n");
    scanf("%d" , &populacao2);

    printf("Digite a área do estado da carta 2: \n");
    scanf("%f" , &area2);

    printf("Digite o PIB do estado da carta 2: \n");
    scanf("%f" , &pib2);

    printf("Digite a quantidade de pontos turísticos do estado da carta 2: \n");
    scanf("%d" , &pontos_turisticos2);

    media = (float)populacao2 / area2;
    printf("A densidade populacional é: %.2f\n", media);
    
    media = (float)(pib2 * 1000000000.0) / populacao2;
    printf("Pib per capital é: %.2f\n", media);

    //pular duas linhas para melhor visualizacao
    printf("\n\n");

    printf("Carta 1 - Código: %s, Estado: %s\n , População: %d, Área: %.2f\n , PIB: %.2f, Pontos Turísticos: %d\n , Densidade populacional: %.2f, Pib per capital: %.2f", codigo_carta1, estado1, populacao1, area1, pib1, pontos_turisticos1, (float)populacao1 / area1, (float)(pib1 * 1000000000.0) / populacao1);
    //pular linha para melhor visualizacao
    printf("\n");
    printf("Carta 2 - Código: %s, Estado: %s\n , População: %d, Área: %.2f\n , PIB: %.2f, Pontos Turísticos: %d\n , Densidade populacional: %.2f, Pib per capital: %.2f", codigo_carta2, estado2, populacao2, area2, pib2, pontos_turisticos2, (float)populacao2 / area2, (float)(pib2 * 1000000000.0) / populacao2);

return 0;

}
