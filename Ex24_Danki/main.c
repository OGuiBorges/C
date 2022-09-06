#include <stdio.h>
#include <stdlib.h>
//#define LETRA 'A'
int main()
{
    //const int LADO = 10;
    /*int vetor[3] = {3, 4, 5};
    vetor[0] = 10;
    printf("Digite um numero para armazenar no vetor! ");
    scanf("%d", &vetor[1]);
    for(int i = 0; i < 3; i++){
        printf("%d \n", vetor[i]);}
*/

/*
    char stringzinho[10] = {};
    char stringzao[256] = {};
    printf("Digite stringzinha: ");
    fflush(stdin);
    scanf("%s", stringzinho);
    printf("%s", stringzinho);
    printf("\nDigite stringzao: ");
    fflush(stdin);
    fgets(stringzao, sizeof(stringzao), stdin);
    puts(stringzao);
*/

    char tabuleiro[2][2] = {{'C','a'},{'b','a'}};
    int i = 0, j = 0;
    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            fflush(stdin);
            scanf("%c", &tabuleiro[i][j]);
        }
    }

    for(i = 0; i < 2; i++){
        for(j = 0; j < 2; j++){
            printf("%c", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
