#include <stdio.h>
 
//Roda as informaçoes da carta numero 1

int main() {

    //cria as "Caixas" da carta 1
    unsigned long int populacao;
    float area;
    float pib;
    float densidade;
    float capta;
    int turistas;
    int resultadoArea;
    int ResultadoPIB;
    int ResultadoDENSI;
    int ResultadoCAPTA;
    int ResultadoTURISTA;
    int ResultadoPOPULACAO;
    int ResultadoSUPERPODER;
    char estado;
    char nome[50];
    char codigo[20];
    





    //cria as outras "Caixas" da carta 2 sem perder a carta 1.

    unsigned long int populacao2;
    float area2;
    float pib2;
    float densidade2;
    float capta2;
    int turistas2;
    char estado2;
    char nome2[50];
    char codigo2[20];


    //faz as perguntas ao jogador e armazena elas na "Caixa"
    printf("Bem Vindo ao jogo, voce ve duas cartas viradas para baixo na sua frente e pega uma\n");

    printf("Voce pode escolher as informações das cartas.\n");

    printf("Escolha uma letra de A - H\n>>");
    scanf("%c",&estado);
    getchar();
    //getchar é para limpar o buffer do codigo pois estava havendo erros com o enter enviando "\n" como resposta.

    printf("Escolha o codigo da carta (numeros com 01 ate 04)\n>>");
    scanf("%s", &codigo);
    getchar();

    printf("Escolha o nome da cidade. (tudo junto)\n>>");
    scanf("%s", &nome);
    getchar();

    printf("Escolha o tamanho da cidade. (em numeros sem pontuação.)\n>>");
    scanf("%f", &area);
    

    printf("Escolha o tamanho do PIB desse estado.\n>>");
    scanf("%f", &pib);
    

    printf("Escolha o tamanho da população.\n>>");
    scanf("%u", &populacao);
    

    printf("Escolha quantos pontos turisticos o local tem.\n>>");
    scanf("%i", &turistas);
    

    // Faz o calculo da densidade e do pib per capta

    densidade = (float)populacao / area;
    capta = (float)pib / populacao;

    // faz o calculo do super poder 1 e 2
    float superpoder = (float)turistas + (float)populacao + area + pib + capta + (1 / densidade);


    //printa as informações que foram guardadas no console.

    printf("            Letra Do Estado: %c\n", estado);
    printf("            Codigo Da carta: %c%s\n", estado, codigo);
    printf("            Nome da Cidade: %s\n",nome);
    printf("            Tamanho da Area da cidade: %f km²\n", area);
    printf("            Valor do PIB do estado: %f Reais\n", pib);
    printf("            Total de população: %u pessoas\n", populacao);
    printf("            Com aproximadamente %i pontos turisticos.\n", turistas);
    printf("            Densidade Populacional: %f hab/km²\n ", densidade);
    printf("           Pib per capta: %f Reais\n", capta);
    printf("            SuperPoder:%f\n", superpoder);


    //"Recomeça" a fazer a intro.

    printf("Voce pega a outra carta.\n");

    printf("Voce pode escolher novamente as informações da carta.\n");

    
    //faz as perguntas para armazena-las

    printf("Escolha uma letra de A - H>>\n");
    scanf("%c",&estado2);
    getchar();
    
    printf("Escolha o codigo da carta (numeros com 01 ate 04)\n>>");
    scanf("%s", &codigo2);
    getchar();

    printf("Escolha o nome da cidade. (tudo junto)\n>>");
    scanf("%s", &nome2);
    getchar();

    printf("Escolha o tamanho da cidade. (em numeros sem pontuação.)\n>>");
    scanf("%f", &area2);
    

    printf("Escolha o tamanho do PIB desse estado.\n>>");
    scanf("%f", &pib2);
    

    printf("Escolha o tamanho da população.\n>>");
    scanf("%u", &populacao2);
    

    printf("Escolha quantos pontos turisticos o local tem.\n>>");
    scanf("%i", &turistas2);
    


    //Faz o calculo de PIB PER CAPTA2 e DENSIDADE POPULACIONAL2.

    densidade2 = (float)populacao2 / area2;
    capta2 = (float)pib2 / populacao2;

    //faz o calculo superpoder2

    float superpoder2 = (float)turistas2 + (float)populacao2 + area2 + pib2 + capta2 + (1 / densidade2);


    //Coloca no console as informações 2

    printf("            Letra Do Estado: %c\n", estado2);
    printf("            Codigo Da carta: %c%s\n", estado2, codigo2);
    printf("            Nome da Cidade: %s\n",nome2);
    printf("            Tamanho da Area da cidade: %f km²\n", area2);
    printf("            Valor do PIB do estado: %f Reais\n", pib2);
    printf("            Total de população: %u pessoas\n", populacao2);
    printf("            Com aproximadamente %i pontos turisticos.\n", turistas2);
    printf("            Densidade Populacional: %f hab/km²\n ", densidade2);
    printf("           Pib per capta: %f Reais\n", capta2);
    printf("           SuperPoder: %f\n", superpoder2);


    // pega as informações das cartas e compara qual ganhou.

    resultadoArea = area > area2;
    ResultadoPIB = pib > pib2;
    ResultadoPOPULACAO = populacao > populacao2;
    ResultadoTURISTA = turistas > turistas2;
    ResultadoDENSI = densidade < densidade2;
    ResultadoCAPTA = capta > capta2;
    ResultadoSUPERPODER = superpoder > superpoder2;

    //Envia as informações para o usuario
    printf("Carta 1 = Primeira carta, Carta 0 = Segunda Carta!\n");
    printf("Carta %i Venceu!\n", resultadoArea);
    printf("Carta %i Venceu!\n", ResultadoPIB);
    printf("Carta %i Venceu!\n", ResultadoPOPULACAO);
    printf("Carta %i Venceu!\n", ResultadoTURISTA);
    printf("Carta %i Venceu!\n", ResultadoDENSI);
    printf("Carta %i Venceu!\n", ResultadoCAPTA);
    printf("Carta %i Venceu!\n", ResultadoSUPERPODER);
    
    
    

    
    return 0;

}
 