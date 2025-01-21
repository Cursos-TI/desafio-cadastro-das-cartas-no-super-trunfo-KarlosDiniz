#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    // *INICIANDO O DESAFIO

    // Iniciando a codificação será impresso o Título: "Desafio: Cartas Super Trunfo - Países"

    printf ("Desafio: Cartas Super Trunfo - Países\n\n\n");

    // Na sequencia será informando ao usuário que o cadastramento das cidades e suas respectivas informações será efetuado pelo próprio usuário, e As cartas serão divididas por estados, cada um com quatro cidades. Cada país será dividido em oito estados, identificados pelas letras de A a H. Cada estado terá quatro cidades, numeradas de 1 a 4. A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).

    printf ("Vamos iniciar o cadastro das cidades do nosso Jogo Super Trunfo Países?\n\n\n");
    
    // Solicita ao usuário inserir as informações conforme sequencia dos dados

    printf ("Comece a informar os dados conforme solicitado para cadastramento das cidades e suas respectivas informações.\n\n As cartas serão divididas por estados, cada um com quatro cidades.\n\n Cada país será dividido em oito estados, identificados pelas letras de A a H.\n\n Cada estado terá quatro cidades, numeradas de 1 a 4.\n\n A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n\n\nProntos???\n\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código A1:

    char codigoA1[2], nomeA1[25];
    int populacaoA1, areaA1, PIBA1, N_Pontos_TuristicosA1;

    // Solicitando ao usuário os dados das cartas Código A1

    printf ("Entre com os dados da cidade com Código A1:\nNome:\nPopulação\nÁrea\nPIB\nNúmero de pontos turísticos\n");
    scanf (" %s", &nomeA1);
    scanf (" %d", &populacaoA1);
    scanf (" %d", &areaA1);
    scanf (" %d", &PIBA1);
    scanf (" %d", &N_Pontos_TuristicosA1);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A1
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A1: %s", nomeA1);
    printf ("\nPopulação: %d", populacaoA1);
    printf ("\nArea: %d", areaA1);
    printf ("\nPIB: %d", PIBA1);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA1);

    // Definindo variáveis separadas para cada atributo da cidade código A2:

    char codigoA2[2], nomeA2[25];
    int populacaoA2, areaA2, PIBA2, N_Pontos_TuristicosA2;

    // Solicitando ao usuário os dados das cartas Código A2

    printf ("Entre com os dados da cidade com Código A2:\nNome:\nPopulação\nÁrea\nPIB\nNúmero de pontos turísticos\n");
    scanf (" %s", &nomeA2);
    scanf (" %d", &populacaoA2);
    scanf (" %d", &areaA2);
    scanf (" %d", &PIBA2);
    scanf (" %d", &N_Pontos_TuristicosA2);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A2
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A2: %s", nomeA2);
    printf ("\nPopulação: %d", populacaoA2);
    printf ("\nArea: %d", areaA2);
    printf ("\nPIB: %d", PIBA2);
    printf ("\nNúmero de Pontos Turísticos: %d", N_Pontos_TuristicosA2);

    return 0;
}