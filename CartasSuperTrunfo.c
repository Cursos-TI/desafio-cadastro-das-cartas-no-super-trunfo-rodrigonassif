#include <stdio.h>

int main() {
    char estado1, estado2; // criar as variáveis estado1 e estado2 com o tipo caractere
    char codigo1[4], codigo2[4]; // criar as variáveis codigo1 e codigo2 do tipo string com tamanho de até 4 caracteres
    char cidade1[50], cidade2[50]; // criar as variáveis cidade1 e cidade2 do tipo string com tamanho de até 50 caracteres
    int populacao1, populacao2; // criar as variáveis populacao1 e populacao2 do tipo inteiro
    float area1, area2; // criar as variáveis area1 e area2 do tipo float
    float pib1, pib2; // criar as variáveis pib1 e pib2 do tipo float
    int pontos_turisticos1, pontos_turisticos2; // criar as variáveis ponto_turisticos1 e ponto_turisticos2 do tipo inteiro 
    
    printf("Cadastro da Carta 1:\n"); // exibir na tela o titulo Cadastro de Cartas
    printf("Estado (A-H): "); // exibir na tela a solicitação de entrada de dados para a variável estado1
    scanf(" %c", &estado1); // exibir o prompt de entrada de dados para a variável estado1
    printf("Código da Carta: "); // exibir na tela a solicitação de entrada de dados para a variável codigo1
    scanf(" %s", codigo1); // exibir o prompt de entrada de dados para a variável codigo1
    printf("Nome da Cidade: "); // exibir na tela a solicitação de entrada de dados para a variável cidade1
    scanf("%s", cidade1); // exibir o prompt de entrada de dados para a variável cidade1
    printf("População: "); // exibir na tela a solicitação de entrada de dados para a variável populacao1
    scanf(" %d", &populacao1); // exibir o prompt de entrada de dados para a variável populacao1
    printf("Área (km²): "); // exibir na tela a solicitação de entrada de dados para a variável area1
    scanf(" %f", &area1); // exibir o prompt de entrada de dados para a variável area1
    printf("PIB (bilhões de reais): "); // exibir na tela a solicitação de entrada de dados para a variável pib1
    scanf(" %f", &pib1); // exibir o prompt de entrada de dados para a variável pib1
    printf("Número de Pontos Turísticos: "); // exibir na tela a solicitação de entrada de dados para a variável ponto_turisticos1
    scanf(" %d", &pontos_turisticos1); // exibir o prompot de entrada de dados para a variável ponto_turisticos1

    /*
    o próximo trecho de código , foi codificado nas mesmas diretrizes do código anterior, para as segundas variáveis de mesmo tipo
    seguindo as regras de formatação nas funçoes printf e scanf 
    para então o cadastro da Carta 2 
    
    */
    
    printf("\nCadastro da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %s", cidade2);
    printf("População: ");
    scanf(" %d", &populacao2);
    printf("Área (km²): ");
    scanf(" %f", &area2);
    printf("PIB (bilhões de reais): ");
    scanf(" %f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontos_turisticos2);
    /*
    o próximo trecho de codificação em C, demonstra todas as informações das Cartas 1 e 2, apresentadas na tela através da função printf
    e processadas corretamente conforme todas as formatações anteriores , respeitando o tipo das variáveis anteriormente declaradas
    
    */

    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    
    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    
    return 0;
}

