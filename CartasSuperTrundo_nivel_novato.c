#include <stdio.h>

int main(){

int populacao , pontos_turisticos ;
float area , pib ;
char pais[50] , estado_1[50] , codigo_carta1[50];

printf("Digite o país da carta 1: \n");
scanf("%s" , pais);

printf("Digite o nome do estado da carta 1: \n");
scanf("%s" , estado_1);

printf("Digite o código da carta 1: \n");
scanf("%s" , codigo_carta1);

printf("Digite a populção do estado da carta 1: \n");
scanf("%d" , &populacao);

printf("Digite a área do estado da carta 1: \n");
scanf("%f" , &area);

printf("Digite o PIB do estado da carta 1: \n");
scanf("%f" , &pib);

printf("Digite a quantidade de pontos turísticos do estado da carta 1: \n");
scanf("%d" , &pontos_turisticos);

int populacao_2 , pontos_turisticos_2 ;
float area_2 , pib_2 ;
char pais_2[50] , estado_2[50] , codigo_carta2[50];

printf("Digite o país da carta 2: \n");
scanf("%s" , pais_2);

printf("Digite o nome do estado da carta 2: \n");
scanf("%s" , estado_2);

printf("Digite o código da carta 2: \n");
scanf("%s" , codigo_carta2);

printf("Digite a populção do estado da carta 2: \n");
scanf("%d" , &populacao_2);

printf("Digite a área do estado da carta 2: \n");
scanf("%f" , &area_2);

printf("Digite o PIB do estado da carta 2: \n");
scanf("%f" , &pib_2);

printf("Digite a quantidade de pontos turísticos do estado da carta 2: \n");
scanf("%d" , &pontos_turisticos_2);

printf("País da carta 1: %s - Estado: %s - Código: %s \n" , pais, estado_1, codigo_carta1);
printf("População: %d - Área: %.2f - PIB: %.2f - Pontos Turísticos: %d \n" , populacao, area, pib, pontos_turisticos);
printf("País da carta 2: %s - Estado: %s - Código: %s \n" , pais_2, estado_2, codigo_carta2);
printf("População: %d - Área: %.2f - PIB: %.2f - Pontos Turísticos: %d \n" , populacao_2, area_2, pib_2, pontos_turisticos_2);

return 0;
}