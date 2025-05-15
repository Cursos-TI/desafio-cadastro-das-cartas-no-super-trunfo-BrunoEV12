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
signed long int populacaocarta1, populacaocarta2;

//Variaveis da area territorial das cartas 1 e 2.
double areacarta1, areacarta2;

//Variaveis do PIB das cartas 1 e 2.
double pibcarta1, pibcarta2;

//Variaveis de pontos turisticos das cartas 1 e 2.
int pontosturisticoscarta1, pontosturisticoscarta2;

//Variaveis da Densidade Populacional das cartas 1 e 2.
float densidade_populacional_carta1, densidade_populacional_carta2;

//Variaveis do PIB Percapita das cartas 1 e 2.
float pib_percapita_carta1, pib_percapita_carta2;

//Super Poder das Cartas 1 e 2
double SuperPoder1, SuperPoder2;

//Escolha do Usuario
int escolhaUsuario;








//Começo das Funcionalidades.


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
scanf("%ld", &populacaocarta1);   //Ler o que o usuario digitou.

printf("Digite a Area da Cidade da carta 1: ");  //Pedir Area da cidade da carta 1.
scanf("%lf", &areacarta1);    //Ler o que o usuario digitou.

printf("Digite o PIB da Cidade da carta 1: ");   //Pedir PIB da cidade da carta 1.
scanf("%lf", &pibcarta1);   //Ler o que o usuario digitou.

printf("Digite a quantidade de pontos turisticos da cidade da carta 1: ");    //Pedir pontos turisticos da cidade da carta 1.
scanf("%d", &pontosturisticoscarta1);   //Ler o que o usuario digitou.





//Calculo densidade populacional, PIBPercapita e Super Poder da CARTA 1.

//Calculo Densidade Populacional CARTA 1.
densidade_populacional_carta1 =(float) populacaocarta1 / areacarta1;

//Calculo PIB Percapita CARTA 1.
pib_percapita_carta1 = (float) pibcarta1 / populacaocarta1;

//Calculo Super Poder CARTA 1.
SuperPoder1 = (double) (populacaocarta1 + areacarta1 + pibcarta1 + pontosturisticoscarta1 + pib_percapita_carta1) - densidade_populacional_carta1;





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
printf("População: %ld \n", populacaocarta1);

//Apresentação da AREA.
printf("Area da Cidade: %.2f \n", areacarta1);

//Apresentar PIB.
printf("PIB da Cidade: %.2f \n", pibcarta1);

//Apresentar Pontos Turisticos.
printf("Pontos Turisticos da Cidade: %d \n", pontosturisticoscarta1);

//Apresentação da Densidade Populacional.
printf("Densidade Populacional: %.2f \n", densidade_populacional_carta1);

//Apresentação do PIB Per Capita.
printf("PIB Per Capita: %.2f \n", pib_percapita_carta1);

//Apresentação Super Poder.
printf("Super Poder: %.2f \n", SuperPoder1);


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
scanf("%ld", &populacaocarta2);   //Ler o que o usuario digitou.

printf("Digite a Area da Cidade da carta 2: ");  //Pedir Area da cidade da carta 2.
scanf("%lf", &areacarta2);    //Ler o que o usuario digitou.

printf("Digite o PIB da Cidade da carta 2: ");   //Pedir PIB da cidade da carta 2.
scanf("%lf", &pibcarta2);   //Ler o que o usuario digitou.

printf("Digite a quantidade de pontos turisticos da cidade da carta 2: ");    //Pedir pontos turisticos da cidade da carta 2.
scanf("%d", &pontosturisticoscarta2);   //Ler o que o usuario digitou.






//Calculo densidade populacional, PIBPercapita e Super Poder da CARTA 2.

//Calculo Densidade Populacional CARTA 2.
densidade_populacional_carta2 =(float) populacaocarta2 / areacarta2;

//Calculo PIB Percapita CARTA 2.
pib_percapita_carta2 = (float) pibcarta2 / populacaocarta2;

//Calculo Super Poder CARTA 2.
SuperPoder2 = (double) (populacaocarta2 + areacarta2 + pibcarta2 + pontosturisticoscarta2 + pib_percapita_carta2) - densidade_populacional_carta2;








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
printf("População: %ld \n", populacaocarta2);

//Apresentação da AREA.
printf("Area da Cidade: %.2f \n", areacarta2);

//Apresentar PIB.
printf("PIB da Cidade: %.2f \n", pibcarta2);

//Apresentar Pontos Turisticos.
printf("Pontos Turisticos da Cidade: %d \n", pontosturisticoscarta2);

//Apresentação da Densidade Populacional.
printf("Densidade Populacional: %f \n", densidade_populacional_carta2);

//Apresentação do PIB Per Capita.
printf("PIB Per Capita: %f \n", pib_percapita_carta2);

//Apresentação Super Poder.
printf("Super Poder: %.2f \n", SuperPoder2);



//Diferenciar linha
printf("========================================= \n");








//Menu Batalha de Cartas.


//apresentação
printf("*** MENU DE BATALHA *** \n");
//Diferenciar linha
printf("========================================= \n");
//explicação e opções.
printf("Escolha a Baixo que atributos gostaria, para realiar o duelo entre CARTA 1 e CARTA 2. \n");
printf("Digite 1 para POPULAÇÃO \n");
printf("Digite 2 para AREA \n");
printf("Digite 3 para PIB \n");
printf("Digite 4 para NUMERO DE PONTOS TURISTICOS \n");
printf("Digite 5 para DENSIDADE DEMOGRAFICA \n");
printf("========================================= \n");
//escolha do usuario e leitura da escolha.
printf("Digite sua Escolha: ");
scanf("%d", &escolhaUsuario);








//Diferenciar linha
printf("========================================= \n");








//Batalha.

switch (escolhaUsuario)
{
    //batalha população
case 1: 


    if (populacaocarta1 > populacaocarta2){

    printf("Batalha de População \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta1, cidadecarta1, populacaocarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta2, cidadecarta2, populacaocarta2);
    printf("A CARTA 1 *** Venceu ***. \n");


} else if ( populacaocarta2 > populacaocarta1) {

    printf("Batalha de População \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta1, cidadecarta1, populacaocarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta2, cidadecarta2, populacaocarta2);
    printf("A CARTA 2 *** Venceu ***. \n");

} else {

    printf("Batalha de População \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta1, cidadecarta1, populacaocarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - População de %ld Habitantes \n", estadocarta2, cidadecarta2, populacaocarta2);
    printf("### EMPATOU ### \n");

}


    break;

    //batalha de area
case 2: 


    if (areacarta1 > areacarta2){

    printf("Batalha de Area \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta1, cidadecarta1, areacarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta2, cidadecarta2, areacarta2);
    printf("A CARTA 1 *** Venceu ***. \n");


} else if ( areacarta2 > areacarta1) {

    printf("Batalha de Area \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta1, cidadecarta1, areacarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta2, cidadecarta2, areacarta2);
    printf("A CARTA 2 *** Venceu ***. \n");

} else {

    printf("Batalha de Area \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta1, cidadecarta1, areacarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Area de %.2f Metros Quadrados \n", estadocarta2, cidadecarta2, areacarta2);
    printf("### EMPATOU ### \n");

}


    break;

    //batalha de pib
    case 3: 


    if (pibcarta1 > pibcarta2){

    printf("Batalha de PIB \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f  \n", estadocarta1, cidadecarta1, pibcarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f \n", estadocarta2, cidadecarta2, pibcarta2);
    printf("A CARTA 1 *** Venceu ***. \n");


} else if ( pibcarta2 > pibcarta1) {

    printf("Batalha de PIB \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f  \n", estadocarta1, cidadecarta1, pibcarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f \n", estadocarta2, cidadecarta2, pibcarta2);
    printf("A CARTA 2 *** Venceu ***. \n");

} else {

    printf("Batalha de PIB \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f  \n", estadocarta1, cidadecarta1, pibcarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - PIB de R$ %.2f \n", estadocarta2, cidadecarta2, pibcarta2);
    printf("### EMPATOU ### \n");

}


    break;

    //batalha de Numero de pontos turisticos
    case 4:  


    if ( pontosturisticoscarta1 > pontosturisticoscarta2){

    printf("Batalha de Pontos Turisticos \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta1, cidadecarta1, pontosturisticoscarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta2, cidadecarta2, pontosturisticoscarta2);
    printf("A CARTA 1 *** Venceu ***. \n");


} else if ( pontosturisticoscarta2 > pontosturisticoscarta1) {

    printf("Batalha de Pontos Turisticos \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta1, cidadecarta1, pontosturisticoscarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta2, cidadecarta2, pontosturisticoscarta2);
    printf("A CARTA 2 *** Venceu ***. \n");

} else {

    printf("Batalha de Pontos Turisticos \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta1, cidadecarta1, pontosturisticoscarta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - São %ld Pontos Turisticos \n", estadocarta2, cidadecarta2, pontosturisticoscarta2);
    printf("### EMPATOU ### \n");

}


    break;

    //batalha de densidade populacional
    case 5:


    if (densidade_populacional_carta1 > densidade_populacional_carta2){

    printf("Batalha de Densidade Populacional (MENOR VENCE) \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta1, cidadecarta1, densidade_populacional_carta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta2, cidadecarta2, densidade_populacional_carta2);
    printf("A CARTA 2 *** Venceu ***. \n");


} else if ( densidade_populacional_carta2 > densidade_populacional_carta1) {

    printf("Batalha de Densidade Populacional (MENOR VENCE) \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta1, cidadecarta1, densidade_populacional_carta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta2, cidadecarta2, densidade_populacional_carta2);
    printf("A CARTA 1 *** Venceu ***. \n");

} else {

    printf("Batalha de Densidade Populacional (MENOR VENCE) \n");
    printf("CARTA 1 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta1, cidadecarta1, densidade_populacional_carta1);
    printf("CARTA 2 - ESTADO : %s - CIDADE: %s - Densidade Populacional de %f \n", estadocarta2, cidadecarta2, densidade_populacional_carta2);
    printf("### EMPATOU ### \n");

}


    break;


default:

printf("### Escolha Invalida ### \n");

    break;
}








//Diferenciar linha
printf("========================================= \n");











//Agradecimento final.
printf("Obrigado por participar!");

return 0 ;






}
