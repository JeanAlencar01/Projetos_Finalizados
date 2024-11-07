#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    int Pontos_Turísticos1, População1;
    float Área1, PIB1;
    float Densidade_Populacional1 = População1 / Área1;
    float PIB_per_capita1 = PIB1 / População1;
    float superPoder1 = (Pontos_Turísticos1 + População1 + Área1 + PIB1);
    char Código_Carta1[10];
    char Pais1[25];
    char Estado1[25]; 
    char Cidade1[50];

    int Pontos_Turísticos2, População2;
    float Área2, PIB2;
    float Densidade_Populacional2 = População2 / Área2;
    float PIB_per_capita2 = PIB2 / População2;
    float superPoder2 = (Pontos_Turísticos2 + População2 + Área2 + PIB2);
    char Codigo_Carta2[10];
    char Pais2[25];
    char Estado2[25]; 
    char Cidade2[50];

    /*Cada país será dividido em oito estados, 
    identificados pelas letras de A a H.
    Cada estado terá quatro cidades, 
    numeradas de 1 a 4. 
    A combinação da letra do estado e o número da cidade 
    define o código da carta
     (por exemplo, A01, A02 , B01, B02).*/

    // Cadastro da 1a carta para comparação
    printf ("### Cadastro da Carta 1 ###\n");
    printf ("Digite o Estado\n");
    scanf ("%s", Estado1);

    printf ("Digite o Código da sua Carta\n");
    scanf ("%s", Código_Carta1);

    printf ("Digite o nome da Cidade\n");
    scanf ("%s", Cidade1);
    
    printf ("Digite a População\n");
    scanf ("%d", &População1);

    printf ("Digite a Área km²\n");
    scanf ("%f", &Área1);

    printf ("Digite o PIB\n");
    scanf ("%f", &PIB1);

    printf ("Digite o Número de Pontos Turísticos \n");
    scanf ("%d", &Pontos_Turísticos1);

    Densidade_Populacional1 = (float) População1 / Área1; 
    PIB_per_capita1 = (float) PIB1 / População1;

    printf ("Sua Carta foi Cadastrada com Sucesso!\n");
   
    // Cadastro da 2a carta para comparação
    printf ("### Cadastro da Carta 2 ###\n");
    printf ("Digite o Estado\n");
    scanf ("%s", Estado2);

    printf ("Digite o Código da sua Carta\n");
    scanf ("%s", Codigo_Carta2);

    printf ("Digite o nome da Cidade\n");
    scanf ("%s", Cidade2);
    
    printf ("Digite a População\n");
    scanf ("%d", &População2);

    printf ("Digite a Área km²\n");
    scanf ("%f", &Área2);

    printf ("Digite o PIB\n");
    scanf ("%f", &PIB2);

    printf ("Digite o Número de Pontos Turísticos \n");
    scanf ("%d", &Pontos_Turísticos2);

    Densidade_Populacional2 = (float) População2 / Área2; 
        PIB_per_capita2 = (float) PIB2 / População2;


    printf ("Sua Carta foi Cadastrada com Sucesso!\n");

    // Menu Interativo para comparação
    int escolha;
    
    printf("\n### Jogo Super Trunfo ###\n");
    printf("Escolha uma Opção para comparação das Cartas:\n");
    printf("1. Pontos Turísticos\n");
    printf("2. População\n");
    printf("3. Área km²\n");
    printf("4. PIB\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("8. Sair\n");
    printf("Escolha: ");
    scanf("%d", &escolha);

        switch (escolha) {
        
    case 1:
            printf("Comparando Pontos Turísticos:\n");
            printf("%s - Pontos Turísticos: %d\n", Código_Carta1, Pontos_Turísticos1);
            printf("%s - Pontos Turísticos: %d\n", Codigo_Carta2, Pontos_Turísticos2);
        if (Pontos_Turísticos1 > Pontos_Turísticos2) {
            printf("%s,%s venceu por ter mais Pontos Turísticos.\n", Código_Carta1, Cidade1);
        } else if (Pontos_Turísticos1 < Pontos_Turísticos2) {
            printf("%s,%s venceu por ter mais Pontos Turísticos.\n", Codigo_Carta2,Cidade2);
        } else {
            printf("Empate em Pontos Turísticos!\n");
        }
        break;

    case 2:
        printf("Comparando População:\n");
            printf("%s - População: %d\n", Código_Carta1, População1);
            printf("%s - População: %d\n", Codigo_Carta2, População2);
        if (População1 > População2) {
            printf("%s,%s venceu por ter maior População.\n", Código_Carta1, Cidade1);
        } else if (População1 < População2) {
            printf("%s,%s venceu por ter maior População.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em População!\n");
        }
        break;

    case 3:
            printf("Comparando Área:\n");
            printf("%s - Área: %.2f km²\n", Código_Carta1, Área1);
            printf("%s - Área: %.2f km²\n", Codigo_Carta2, Área2);
        if (Área1 > Área2) {
            printf("%s,%s venceu por ter maior Área.\n", Código_Carta1, Cidade1);
        } else if (Área1 < Área2) {
            printf("%s,%s venceu por ter maior Área.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em Área!\n");
        }
        break;

    case 4:
            printf("Comparando PIB:\n");
            printf("%s - PIB: %.2f\n", Código_Carta1, PIB1);
            printf("%s - PIB: %.2f\n", Codigo_Carta2, PIB2);
        if (PIB1 > PIB2) {
            printf("%s,%s venceu por ter maior PIB.\n", Código_Carta1, Cidade1);
        } else if (PIB1 < PIB2) {
            printf("%s,%s venceu por ter maior PIB.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em PIB!\n");
        }
        break;

    case 5:
            printf("Comparando Densidade Populacional:\n");
            printf("%s - Densidade Populacional: %.2f\n", Código_Carta1, Densidade_Populacional1);
            printf("%s - Densidade Populacional: %.2f\n", Codigo_Carta2, Densidade_Populacional2);
        if (Densidade_Populacional1 < Densidade_Populacional2) {
            printf("%s,%s venceu por ter menor Densidade Populacional.\n", Código_Carta1, Cidade1);
        } else if (Densidade_Populacional1 > Densidade_Populacional2) {
            printf("%s,%s venceu por ter menor Densidade Populacional.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em Densidade Populacional!\n");
        }
        break;

    case 6:
            printf("Comparando PIB per Capita:\n");
            printf("%s - PIB per Capita: %.2f\n", Código_Carta1, PIB_per_capita1);
            printf("%s - PIB per Capita: %.2f\n", Codigo_Carta2, PIB_per_capita2);
        if (PIB_per_capita1 > PIB_per_capita2) {
            printf("%s,%s venceu por ter maior PIB per Capita.\n", Código_Carta1, Cidade1);
        } else if (PIB_per_capita1 < PIB_per_capita2) {
            printf("%s,%s venceu por ter maior PIB per Capita.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em PIB per Capita!\n");
        }
        break;

    case 7:
            printf("Comparando Super Poder:\n");
            printf("%s - Super Poder: %.2f\n", Código_Carta1, superPoder1);
            printf("%s - Super Poder: %.2f\n", Codigo_Carta2, superPoder2);
        if (superPoder1 > superPoder2) {
            printf("%s,%s venceu por ter maior Super Poder.\n", Código_Carta1, Cidade1);
        } else if (superPoder1 < superPoder2) {
            printf("%s,%s venceu por ter maior Super Poder.\n", Codigo_Carta2, Cidade2);
        } else {
            printf("Empate em Super Poder!\n");
        }
        break;
    case 8:
            printf("Saindo do jogo.\n");
        break;

    default:
            printf("Opção inválida, tente novamente.\n");
        break;

        }
    

    return 0;
}