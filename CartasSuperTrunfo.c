#include <stdio.h>

int main (){
    

    //Variaveis para guarda as informações das cartas 1 e 2.
    
    //Variaveis do Estado das cartas 1 e 2.
    char estadocarta1[100], estadocarta2[100];
    
    //Variaveis do código das cartas 1 e 2.
    char condigodacarta1[100], condigodacarta2[100];
    
    //Variaveis da cidade das cartas 1 e 2.
    char cidadecarta1[100], cidadecarta2[100];
    
    //Variaveis da população das cartas 1 e 2.
    int populaçãocarta1, populaçãocarta2;
    
    //Variaveis da area territorial das cartas 1 e 2.
    double areacarta1, areacarta2;
    
    //Variaveis do PIB das cartas 1 e 2.
    int pibcarta1, pibcarta2;
    
    //Variaveis de pontos turisticos das cartas 1 e 2.
    int pontosturisticoscarta1, pontosturisticoscarta2;
    
    //Pequena introdução.
    printf("Olá Bem Vindo(a) ao Super Trunfo Brasil, um jogo de carta de cidades brasileiras. \n Aqui você adicionara duas cartas ao jogo de suas cidades preferidas!! \n"); 
    
    //Pedir informações da CARTA 1 ao usuario.
    
    printf("Certo! Começe digitando o Estado da Carta 1: ");  //Pedir Estado da carta 1.
    fgets(estadocarta1, 100, stdin);  //Ler o que o usuario digitou.
    
    printf("Digite um Código para carta 1: ");  //Pedir código da carta 1.
    scanf("%s", condigodacarta1);  //Ler o que o usuario digitou.
    
    getchar();  //Tira o '\n' deixado pelo scanf, possibilitando usar o fgets novamente.
    
    printf("Digite o Nome da cidade da carta 1:");   //Pedir a cidade da carta 1.
    fgets(cidadecarta1, 100, stdin);    //Ler o que o usuario digitou
    
    printf("Digite a população da cidade da carta 1: ");   //Pedir população da cidade da carta 1.
    scanf("%d", &populaçãocarta1);   //Ler o que o usuario digitou.
    
    printf("Digite a Area da Cidade da carta 1: ");  //Pedir Area da cidade da carta 1.
    scanf("%lf", &areacarta1);    //Ler o que o usuario digitou.
    
    printf("Digite o PIB da Cidade da carta 1: ");   //Pedir PIB da cidade da carta 1.
    scanf("%d", &pibcarta1);   //Ler o que o usuario digitou.
    
    printf("Digite a quantidade de pontos turisticos da cidade da carta 1: ");    //Pedir pontos turisticos da cidade da carta 1.
    scanf("%d", &pontosturisticoscarta1);   //Ler o que o usuario digitou.
    
    
    //Apresentação da CARTA 1.
    
    //Diferenciar linha
    printf("========================================= \n");
    
    //Apresentação CARTA 1.
    
    printf("CARTA 1 \n");
    
    //apresentação do ESTADO.
    printf("Estado: %s \n", estadocarta1);
    
    //Apresentação do CÓDIGO.
    printf("Código da carta: %s \n", condigodacarta1);
    
    //Apresentação da CIDADE.
    printf("Cidade: %s \n", cidadecarta1);
    
    //Apresentação da POPULAÇÃO.
    printf("População: %d \n", populaçãocarta1);
    
    //Apresentação da AREA.
    printf("Area da Cidade: %.2f \n", areacarta1);
    
    //Apresentar PIB.
    printf("PIB da Cidade: %d \n", pibcarta1);
    
    //Apresentar Pontos Turisticos.
    printf("Pontos Turisticos da Cidade: %d \n", pontosturisticoscarta1);
    
    //Diferenciar linha
    printf("========================================= \n");
    
    //CARTA 2
    
    //Pedir informações da CARTA 2 ao usuario.
    printf("Agora vamos fazer o mesmo para CARTA 2. \n");
    
    //Diferenciar linha
    printf("========================================= \n");
    
    getchar();  //Tira o '\n', possibilitando usar o fgets.
    
    printf("Estado da Carta 2:");  //Pedir Estado da carta 2.
    fgets(estadocarta2, 100, stdin);  //Ler o que o usuario digitou.
    
    printf("Digite um Código para carta 2: ");  //Pedir codigo da carta 2.
    scanf("%s", condigodacarta2);  //Ler o que o usuario digitou.
    
    getchar();  //Tira o '\n' deixado pelo scanf, possibilitando usar o fgets novamente.
    
    printf("Digite o Nome da cidade da carta 2:");   //Pedir a cidade da carta 2.
    fgets(cidadecarta2, 100, stdin);    //Ler o que o usuario digitou
    
    printf("Digite a população da cidade da carta 2: ");   //Pedir população da cidade da carta 2.
    scanf("%f", &populaçãocarta2);   //Ler o que o usuario digitou.
    
    printf("Digite a Area da Cidade da carta 2: ");  //Pedir Area da cidade da carta 2.
    scanf("%lf", &areacarta2);    //Ler o que o usuario digitou.
    
    printf("Digite o PIB da Cidade da carta 2: ");   //Pedir PIB da cidade da carta 2.
    scanf("%f", &pibcarta2);   //Ler o que o usuario digitou.
    
    printf("Digite a quantidade de pontos turisticos da cidade da carta 2: ");    //Pedir pontos turisticos da cidade da carta 2.
    scanf("%d", &pontosturisticoscarta2);   //Ler o que o usuario digitou.
    
    //Apresentação da CARTA 2.
    
    //Diferenciar linha
    printf("========================================= \n");
    
    //Apresentação CARTA 2.
    
    printf("CARTA 2 \n");
    
    //apresentação do ESTADO.
    printf("Estado: %s \n", estadocarta2);
    
    //Apresentação do CÓDIGO.
    printf("Código da carta: %s \n", condigodacarta2);
    
    //Apresentação da CIDADE.
    printf("Cidade: %s \n", cidadecarta2);
    
    //Apresentação da POPULAÇÃO.
    printf("População: %d \n", populaçãocarta2);
    
    //Apresentação da AREA.
    printf("Area da Cidade: %.2f \n", areacarta2);
    
    //Apresentar PIB.
    printf("PIB da Cidade: %d \n", pibcarta2);
    
    //Apresentar Pontos Turisticos.
    printf("Pontos Turisticos da Cidade: %d \n", pontosturisticoscarta2);
    
    //Diferenciar linha
    printf("========================================= \n");
    
    //Agradecimento final.
    printf("Obrigado por participar!");
    
    return 0 ;
}
