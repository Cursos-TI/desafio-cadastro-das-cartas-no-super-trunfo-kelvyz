#include <stdio.h>
//Teste
int main(){
    //carta1
    char nome_cidade1 [20], codigo_cidade1 [5], estado1 [3];
    int popula1, ponto_turistico1;
    float area1, pib1;
    //carta2
    char nome_cidade2 [20], codigo_cidade2 [5], estado2 [3];
    int popula2, ponto_turistico2;
    float area2, pib2;
    //CADASTRO DA PRIMEIRA CARTA 
    printf("Sejam bem vindos ao Super Trunfo \n");
    printf("Para começar, vamos cadastrar as cartas \n");
    printf("Carta 1\n");
    printf("Escolha uma letra de 'A' a 'H', para representar o estado: \n");
    scanf("%s",&estado1);
    printf("Agora digite a letra escolhida mais um número para cadastrar o codigo (ex: A01): \n");
    scanf("%s",&codigo_cidade1);
    printf("Digite o nome da Cidade: \n");
    scanf("%s",&nome_cidade1);
    printf("Digite a quantidade de habitantes nessa cidade:\n");
    scanf("%d",&popula1);
    printf("Digite a Área da cidade em km²: \n");
    scanf("%f",&area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib1);
    printf("Digite a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d",&ponto_turistico1);

    //CADASTRO DA SEGUNDA CARTA
    printf("Ótimo, agora vamos cadastrar a outra carta \n");
    printf("Carta 2 \n");

    printf("Escolha uma letra de 'A' a 'H', para representar o estado: \n");
    scanf("%s",&estado2);
    printf("Agora digite a letra escolhida mais um número para cadastrar o codigo (ex: A01): \n");
    scanf("%s",&codigo_cidade2);
    printf("Digite o nome da Cidade: \n");
    scanf("%s",&nome_cidade2);
    printf("Digite a quantidade de habitantes nessa cidade:\n");
    scanf("%d",&popula2);
    printf("Digite a Área da cidade em km²: \n");
    scanf("%f",&area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f",&pib2);
    printf("Digite a quantidade de Pontos Turisticos da cidade: \n");
    scanf("%d",&ponto_turistico2);
// RESULTADO
    printf("Carta 1: \n Estado:%s \n Código:%s \n Nome da Cidade:%s \n População:%d \n Área em km²:%.2f km² \n PIB:R$ %.2f \n Pontos Turisticos:%d \n ",estado1,codigo_cidade1,nome_cidade1,popula1,area1,pib1,ponto_turistico1);
    printf("Carta 2: \n Estado:%s \n Código:%s \n Nome da Cidade:%s \n População:%d \n Área em km²:%.2f km² \n PIB:R$ %.2f \n Pontos Turisticos:%d  ",estado2,codigo_cidade2,nome_cidade2,popula2,area2,pib2,ponto_turistico2);
    return 0;
}