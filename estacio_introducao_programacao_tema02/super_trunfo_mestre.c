/*Super Trunfo Nível Aventureiro*/



#include <stdio.h>
int main(){

    /*Lista de variáveis*/
    //Variáveis da carta 01
    char estado01[50];
    char codigo01[50];
    char cidade01[50];
    long long populacao01;
    double area01;
    double pib01;
    int pontos_turisticos01;
    double densidade_populacional01;
    double pib_per_capita01;
    double super_poder01;


    //Variáveis da carta 02
    char estado02[50];
    char codigo02[50];
    char cidade02[50];
    long long populacao02;
    double area02;
    double pib02;
    int pontos_turisticos02;
    double densidade_populacional02;
    double pib_per_capita02;
    double super_poder02;


    //Variáveis de comparação entre cartas
    int comparacao_populacao;
    int comparacao_area;
    int comparacao_pib;
    int comparacao_pontos_turisticos;
    int comparacao_densidade_populacional;
    int comparacao_pib_per_capita;



 /*Inicialização do programa*/

    printf("Bem-vindo ao Super Trunfo de Países!!\n\n");
    printf("Para começar, te ajudaremos a construir seu baralho.\nPor favor, siga as instruções: \n\n");
    



    /*Coleta de dados das cartas*/


    //Coleta e exibição de dados carta Nº01:
    
    printf("Carta Nº01\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", estado01);

    printf("Digite um número de 01 a 04 para determinar o código da carta(Ex: A01): \n");
    scanf("%s", codigo01);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", cidade01);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%lld", &populacao01);

    printf("Digite, em números, a área em kilômetros quadrados da cidade escolhida: \n");
    scanf("%lf", &area01);

    printf("Digite, em números, o PIB da cidade escolhida: \n");
    scanf("%lf", &pib01);
    
    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos01);


    //Calculos das variáveis derivadas da carta 01
    densidade_populacional01 = (double)populacao01 / area01;
    pib_per_capita01 = pib01 / (double)populacao01;
    super_poder01 = (double) ( ( populacao01 + area01 + pib01 + pontos_turisticos01 + pib_per_capita01 ) * 1.0 / densidade_populacional01);





    //Coleta e exibição de dados carta Nº02:
    
    printf("Carta Nº02\n");
    
    printf("Digite uma letra de A à H para determinar o estado da carta: \n");
    scanf ("%s", estado02);

    printf("Digite um número de 01 a 04 para determinar o código da carta(Ex: A01): \n");
    scanf("%s", codigo02);

    printf("Digite o nome da cidade representada na carta: \n");
    scanf("%s", cidade02);

    printf("Digite, em números, a população da cidade escolhida: \n");
    scanf("%lld", &populacao02);

    printf("Digite, em números, a área em km² da cidade escolhida: \n");
    scanf("%lf", &area02);

    printf("Digite, em números, o PIB em R$ da cidade escolhida: \n");
    scanf("%lf", &pib02);

    printf("Digite, em números, quantos pontos turísticos existem na cidade: \n");
    scanf("%d", &pontos_turisticos02);

    //Calculos das variáveis derivadas da carta 01
    densidade_populacional02 = (double)populacao02 / area02;
    pib_per_capita02 = pib02 / (double)populacao02;
    super_poder02 = (double) ( ( populacao02 + area02 + pib02 + pontos_turisticos02 + pib_per_capita02 ) * 1.0 / densidade_populacional02);



    // Exibição de dados carta Nº01
    printf("\nCarta Nº01:\n");
    printf("Estado: %s\n", estado01);
    printf("Código: %s\n", codigo01);
    printf("Nome da Cidade: %s\n", cidade01);
    printf("População: %lld\n", populacao01);
    printf("Área: %.2f Km²\n", area01);
    printf("PIB: %.2f reais\n", pib01);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos01);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional01);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita01);
    printf("Super Poder: %.2f\n", super_poder01);



    // Exibição dos dados da carta Nº02
    printf("\nCarta Nº02:\n");
    printf("Estado: %s\n", estado02);
    printf("Código: %s\n", codigo02);
    printf("Nome da Cidade: %s\n", cidade02);
    printf("População: %lld\n", populacao02);
    printf("Área: %.2f Km²\n", area02);
    printf("PIB: %.2f reais\n", pib02);
    printf("Numero de pontos turísticos: %d\n", pontos_turisticos02);

    printf("Densidade Populacional: %.2f hab/km²\n", densidade_populacional02);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita02);
    printf("Super Poder: %.2f\n", super_poder02);



    //Comparação entre cartas

    printf("\n*** COMPARANDO AS CARTAS: ***\n");
    
    int carta01 = 0, carta02 = 0;

     carta01 += (populacao01 > populacao02);
     carta02 += (populacao02 > populacao01);

    printf("POPULAÇÃO: Carta01: %d - Carta02: %d\n", populacao01, populacao02);

    carta01 += (area01 > area02);
    carta02 += (area02 > area01);

    printf("ÁREA: Carta01: %f - Carta02: %f\n", area01, area02);

    carta01 += (pib01 > pib02);
    carta02 += (pib02 > pib01);

    printf("PIB: Carta01: %f - Carta02: %f\n", pib01, pib02);

    carta01 += (pontos_turisticos01 > pontos_turisticos02);
    carta02 += (pontos_turisticos02 > pontos_turisticos01);

    printf("PONTOS TURÍSTICOS: Carta01: %d - Carta02: %d\n", pontos_turisticos01, pontos_turisticos02);

    carta01 += (densidade_populacional01 < densidade_populacional02);
    carta02 += (densidade_populacional02 < densidade_populacional01);

    printf("DENSIDADE POPULACIONAL: Carta01: %f - Carta02: %f\n", densidade_populacional01, densidade_populacional02);

    carta01 += (pib_per_capita01 > pib_per_capita02);
    carta02 += (pib_per_capita02 > pib_per_capita01);

    printf("PIB PER CAPITA: Carta01: %f - Carta02: %f\n", pib_per_capita01, pib_per_capita02);

    carta01 += (super_poder01 > super_poder02);
    carta02 += (super_poder02 > super_poder01);

    printf("SUPER PODER: Carta01: %f - Carta02: %f\n", super_poder01, super_poder02);

    printf("\nPONTUAÇÃO FINAL:\n");
    printf("CARTA 01: %d pontos\n", carta01);
    printf("CARTA 02: %d pontos\n", carta02);

    
    char *resultado = (carta01 > carta02) ? "CARTA 01 VENCEU" :
                      (carta02 > carta01) ? "CARTA 02 VENCEU" :
                                            "EMPATE";

    printf("RESULTADO: %s\n", resultado);

   

    return 0;

}