#include <stdio.h>
 
//Roda as informaçoes da carta numero 1

int main() {

    //armazena as informaçoes da carta 1
    int populacao;
    float area;
    float pib;
    int turistas;
    char estado;
    char nome[50];
    char codigo[20];


    //Armazena as outras informações da carta 2 sem perder a carta 1.

    int populacao2;
    float area2;
    float pib2;
    int turistas2;
    char estado2;
    char nome2[50];
    char codigo2[20];


    //faz as perguntas ao jogador e armazena elas na "Caixa"
    printf("Bem Vindo ao jogo, voce ve duas cartas viradas para baixo na sua frente e pega uma\n");

    printf("Voce pode escolher as informações das cartas.\n");

    printf("Escolha uma letra de A - H\n>>");
    scanf("%c",&estado);

    printf("Escolha o codigo da carta (numeros com 01 ate 04)\n>>");
    scanf("%s", &codigo);

    printf("Escolha o nome da cidade. (tudo junto)\n>>");
    scanf("%s", &nome);

    printf("Escolha o tamanho da cidade. (em numeros sem pontuação.)\n>>");
    scanf("%f", &area);

    printf("Escolha o tamanho do PIB desse estado.\n>>");
    scanf("%f", &pib);

    printf("Escolha o tamanho da população.\n>>");
    scanf("%i", &populacao);

    printf("Escolha quantos pontos turisticos o local tem.\n>>");
    scanf("%i", &turistas);

    //printa as informações que foram guardadas no console.

    printf("            Letra Do Estado: %c\n", estado);
    printf("            Codigo Da carta: %c%s\n", estado, codigo);
    printf("            Nome da Cidade: %s\n",nome);
    printf("            Tamanho da Area da cidade: %f km²\n", area);
    printf("            Valor do PIB do estado: %f R$\n", pib);
    printf("            Total de população: %i pessoas\n", populacao);
    printf("            Com aproximadamente %i pontos turisticos.\n", turistas);

    
    //"Recomeça" a fazer a intro.

    printf("Voce pega a outra carta.\n");

    printf("Voce pode escolher novamente as informações da carta.\n");

    
    //faz as perguntas para armazena-las

    printf("Escolha uma letra de A - H>>\n");
    getchar();
    //getchar limpa o buffer de entrada pois estava havendo um \n que eu não estava conseguindo tirar.
    scanf("%c",&estado2);
    
    printf("Escolha o codigo da carta (numeros com 01 ate 04)\n>>");
    scanf("%s", &codigo2);

    printf("Escolha o nome da cidade. (tudo junto)\n>>");
    scanf("%s", &nome2);

    printf("Escolha o tamanho da cidade. (em numeros sem pontuação.)\n>>");
    scanf("%f", &area2);

    printf("Escolha o tamanho do PIB desse estado.\n>>");
    scanf("%f", &pib2);

    printf("Escolha o tamanho da população.\n>>");
    scanf("%i", &populacao2);

    printf("Escolha quantos pontos turisticos o local tem.\n>>");
    scanf("%i", &turistas2);

    //Coloca no console as informações 2

    printf("            Letra Do Estado: %c\n", estado2);
    printf("            Codigo Da carta: %c%s\n", estado2, codigo2);
    printf("            Nome da Cidade: %s\n",nome2);
    printf("            Tamanho da Area da cidade: %f km²\n", area2);
    printf("            Valor do PIB do estado: %f R$\n", pib2);
    printf("            Total de população: %i pessoas\n", populacao2);
    printf("            Com aproximadamente %i pontos turisticos.\n", turistas2);

    
    return 0;

}
 