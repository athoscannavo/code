/*Super Trunfo Nível Aventureiro*/



#include <stdio.h>
int main(){

    /*Lista de variáveis*/
    //Variáveis da carta 01
    char estado01[50];
    char codigo01[50];
    char cidade01[50];
    float populacao01;
    float area01;
    float pib01;
    int pontos_turisticos01;
    float densidade_populacional01;
    float pib_per_capita01;



    //Variáveis da carta 02
    char estado02[50];
    char codigo02[50];
    char cidade02[50];
    float populacao02;
    float area02;
    float pib02;
    int pontos_turisticos02;
    float densidade_populacional02;
    float pib_per_capita02;

 /*Inicialização do programa*/

    printf("Bem-vindo ao Super Trunfo de Países!!\n\n");
    printf("Para começar, te ajudaremos a construir seu baralho.\nPor favor, siga as instruções: \n\n");
    



    /*Coleta de dados das cartas*/


    //Coleta e exibição de dados carta Nº01:
    
    printf("Carta Nº01\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", &estado01);

    printf("Digite um número de 01 a 04 para determinar o código da carta(Ex: A01): \n");
    scanf("%s", &codigo01);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", &cidade01);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%f", &populacao01);

    printf("Digite, em números, a área em kilômetros quadrados da cidade escolhida: \n");
    scanf("%f", &area01);

    printf("Digite, em números, o PIB da cidade escolhida: \n");
    scanf("%f", &pib01);
    
    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos01);


    //Calculos das variáveis derivadas da carta 01
    densidade_populacional01 = populacao01 / area01;
    pib_per_capita01 = pib01 / populacao01;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional01);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita01);




    //Coleta e exibição de dados carta Nº02:
    
    printf("Carta Nº02\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", &estado02);

    printf("Digite um número de 01 a 04 para determinar o código da carta(Ex: A01): \n");
    scanf("%s", &codigo02);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", &cidade02);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%f", &populacao02);

    printf("Digite, em números, a área em km² da cidade escolhida: \n");
    scanf("%f", &area02);

    printf("Digite, em números, o PIB em R$ da cidade escolhida: \n");
    scanf("%f", &pib02);

    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos02);

    //Calculos das variáveis derivadas da carta 01
    densidade_populacional02 = populacao02 / area02;
    pib_per_capita02 = pib02 / populacao02;

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional02);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita02);


    // Exibição de dados carta Nº01
    printf("\nCarta Nº01:\n");
    printf("Estado: %c\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %d\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: %.2f reais\n", pib01);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos01);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional01);
    printf("PIB per capita: %.2f reais\n", pib_per_capita01);


    // Exibição dos dados da carta Nº02
    printf("\nCarta Nº01:\n");
    printf("Estado: %c\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %d\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: %.2f reais\n", pib02);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos02);
    printf("Densidade populacional: %.2f hab/km²\n", densidade_populacional02);
    printf("PIB per capita: %.2f reais\n", pib_per_capita02);






   




    return 0;

}