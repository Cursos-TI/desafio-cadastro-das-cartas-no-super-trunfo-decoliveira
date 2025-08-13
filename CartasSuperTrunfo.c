#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    //VARIÁVEIS
    char estado1, estado2;
    char numero1[4], numero2[4];
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int npontosturisticos1, npontosturisticos2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    //ENTRADAS - CARTA 1
    printf("\n\nCARTA 1\n\n");
    printf("Digite a letra de um Estado(A-H): ");
    scanf("%c", &estado1);

    printf("Digite um número(1-4): ");
    scanf("%s", numero1);

    printf("Digite o nome de uma Cidade: ");
    scanf("%s", cidade1);

    printf("Digite a população: ");
    scanf("%d", &populacao1);

    printf("Digite a área da Cidade(km²): ");
    scanf("%f", &area1);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos1);

    //ENTRADAS - CARTA 2
    printf("\n\nCARTA 2\n\n");
    printf("Digite a letra de um Estado(A-H): ");
    scanf("%c", &estado2);

    printf("Digite um número(1-4): ");
    scanf("%s", numero2);

    printf("Digite o nome de uma Cidade: ");
    scanf("%s", cidade2);

    printf("Digite a população: ");
    scanf("%d", &populacao2);

    printf("Digite a área da Cidade(km²): ");
    scanf("%f", &area2);
    
    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &npontosturisticos2);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
