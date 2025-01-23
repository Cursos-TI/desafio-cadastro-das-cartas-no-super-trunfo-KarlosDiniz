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

    // Iniciando a codificação será impresso o Título: "*** Desafio: Cartas Super Trunfo - Países ***"

    printf ("*** Desafio: Cartas Super Trunfo - Países ***\n\n\n");

    /* Na sequencia será informando ao usuário que o cadastramento das cidades e suas respectivas informações 
    será efetuado pelo próprio usuário, e as cartas serão divididas por estados, cada um com quatro cidades. 
    Cada país será dividido em oito estados, identificados pelas letras de A a H. 
    Cada estado terá quatro cidades, numeradas de 01 a 04. 
    A combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).
    */

    printf ("Vamos iniciar o cadastro das cidades do nosso Jogo Super Trunfo Países?\n\n\n");
    
    // Solicita ao usuário inserir as informações conforme sequencia dos dados

    printf ("Comece a informar os dados conforme solicitado, para cadastramento das cidades e suas respectivas informações.\nAs cartas serão divididas por estados, cada um com quatro cidades.\nCada país será dividido em oito estados, identificados pelas letras de A a H.\nCada estado terá quatro cidades, numeradas de 01 a 04.\nA combinação da letra do estado e o número da cidade define o código da carta (por exemplo, A01, A02, B01, B02).\n\nProntos???\n\n");

    // Definindo variáveis separadas para cada atributo da cidade código A01:

    char codigoA01[3], nomeA01[25];
    int populacaoA01, N_Pontos_TuristicosA01;
    float areaA01, PIBA01;

    // Solicitando ao usuário os dados das cartas Código A01

    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A01:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA01);

    printf ("Nome:\n");
    scanf (" %s", &nomeA01);

    printf ("População:\n");
    scanf (" %d", &populacaoA01);
    
    printf ("Área:\n");
    scanf (" %f", &areaA01);

    printf ("PIB:\n");
    scanf (" %f", &PIBA01);

    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA01);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A01
    
    printf ("\nVamos confirmar os dados:\nNome da Cidade A01: %s", nomeA01);
    printf ("\nPopulação: %d", populacaoA01);
    printf ("\nArea: %.2f", areaA01);
    printf ("\nPIB: %.2f", PIBA01);
    printf ("\nNúmero de Pontos Turísticos: %d\n", N_Pontos_TuristicosA01);


    // Definindo variáveis separadas para cada atributo da cidade código A02:

    char codigoA02[3], nomeA02[25];
    int populacaoA02, N_Pontos_TuristicosA02;
    float areaA02, PIBA02;

    // Solicitando ao usuário os dados das cartas Código A02

    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A02:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA02);

    printf ("Nome:\n");
    scanf (" %s", &nomeA02);

    printf ("População:\n");
    scanf (" %d", &populacaoA02);
    
    printf ("Área:\n");
    scanf (" %f", &areaA02);

    printf ("PIB:\n");
    scanf (" %f", &PIBA02);

    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA02);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A02
    
    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A02:\nCódigo Cidade:\n");
    printf ("\nPopulação: %d", populacaoA02);
    printf ("\nArea: %.2f", areaA02);
    printf ("\nPIB: %.2f", PIBA02);
    printf ("\nNúmero de Pontos Turísticos: %d\n", N_Pontos_TuristicosA02);


    // Definindo variáveis separadas para cada atributo da cidade código A03:

    char codigoA03[3], nomeA03[25];
    int populacaoA03, N_Pontos_TuristicosA03;
    float areaA03, PIBA03;

    // Solicitando ao usuário os dados das cartas Código A03

    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A03:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA03);

    printf ("Nome:\n");
    scanf (" %s", &nomeA03);

    printf ("População:\n");
    scanf (" %d", &populacaoA03);
    
    printf ("Área:\n");
    scanf (" %f", &areaA03);

    printf ("PIB:\n");
    scanf (" %f", &PIBA03);

    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA03);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A03
    
    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A03:\nCódigo Cidade:\n");
    printf ("\nPopulação: %d", populacaoA03);
    printf ("\nArea: %.2f", areaA03);
    printf ("\nPIB: %.2f", PIBA03);
    printf ("\nNúmero de Pontos Turísticos: %d\n", N_Pontos_TuristicosA03);


    // Definindo variáveis separadas para cada atributo da cidade código A04:

    char codigoA04[3], nomeA04[25];
    int populacaoA04, N_Pontos_TuristicosA04;
    float areaA04, PIBA04;

    // Solicitando ao usuário os dados das cartas Código A04

    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A04:\nCódigo Cidade:\n");
    scanf (" %s", &codigoA04);

    printf ("Nome:\n");
    scanf (" %s", &nomeA04);

    printf ("População:\n");
    scanf (" %d", &populacaoA04);
    
    printf ("Área:\n");
    scanf (" %f", &areaA04);

    printf ("PIB:\n");
    scanf (" %f", &PIBA04);

    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosA04);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código A04
    
    printf ("\nEntre com os dados da cidade, do 1. Estado, com Código A04:\nCódigo Cidade:\n");
    printf ("\nPopulação: %d", populacaoA04);
    printf ("\nArea: %.2f", areaA04);
    printf ("\nPIB: %.2f", PIBA04);
    printf ("\nNúmero de Pontos Turísticos: %d\n", N_Pontos_TuristicosA04);


    // Definindo variáveis separadas para cada atributo da cidade código B01:

    char codigoB01[3], nomeB01[25];
    int populacaoB01, N_Pontos_TuristicosB01;
    float areaB01, PIBB01;

    // Solicitando ao usuário os dados das cartas Código B01

    printf ("\nEntre com os dados da cidade, do 2. Estado, com Código B01:\nCódigo Cidade:\n");
    scanf (" %s", &codigoB01);

    printf ("Nome:\n");
    scanf (" %s", &nomeB01);

    printf ("População:\n");
    scanf (" %d", &populacaoB01);
    
    printf ("Área:\n");
    scanf (" %f", &areaB01);

    printf ("PIB:\n");
    scanf (" %f", &PIBB01);

    printf ("Número de pontos turísticos\n");
    scanf (" %d", &N_Pontos_TuristicosB01);

    // Imprimindo a confirmação dos dados incluídos pelo usuário das cartas Código B01
    
    printf ("\nEntre com os dados da cidade, do 2. Estado, com Código B01:\nCódigo Cidade:\n");
    printf ("\nPopulação: %d", populacaoB01);
    printf ("\nArea: %.2f", areaB01);
    printf ("\nPIB: %.2f", PIBB01);
    printf ("\nNúmero de Pontos Turísticos: %d\n", N_Pontos_TuristicosB01);




    // Aqui deste trecho em diante deve ter a repetição dos códigos de forma que todas as cartas recebam as informações pelo usuário



    // Programa concluído nesta primeira etapa do Nível Novato



    return 0;
}