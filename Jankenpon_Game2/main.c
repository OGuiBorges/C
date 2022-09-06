#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    char player1[256];
    char player2[256];
    int contador = 1;

    printf("Bem-vindo a Pedra, Papel e tesoura!!!\n");
    printf("Jogador 1 sua vez: \n");
    scanf("%s", player1);
    printf("Jogador 2 sua vez: \n");
    scanf("%s", player2);
    printf("Aguarde o resultado");

    while(contador <= 3){
        Sleep(1000);
        printf(".");
        contador++;
    }
    if(strcmp(player1, "papel")==0 && strcmp(player2, "papel")==0){
        printf("\nDeu empate!");
    }else if(strcmp(player1, "papel")==0 && strcmp(player2, "pedra")==0){
        printf("\nPlayer 1 ganhou por embrulhar a pedra!");
    }else if(strcmp(player1, "papel")==0 && strcmp(player2, "tesoura")==0){
        printf("\nPlayer 2 ganhou por cortar o papel!");
    }else if(strcmp(player1, "pedra")==0 && strcmp(player2, "papel")==0){
        printf("\nPlayer 2 ganhou por embrulhar a pedra!");
    }else if(strcmp(player1, "pedra")==0 && strcmp(player2, "pedra")==0){
        printf("\nDeu empate!");
    }else if(strcmp(player1, "pedra")==0 && strcmp(player2, "tesoura")==0){
        printf("\nPlayer 1 ganhou por quebrar a tesoura!");
    }else if(strcmp(player1, "tesoura")==0 && strcmp(player2, "papel")==0){
        printf("\nPlayer 1 ganhou por cortar o papel!");
    }else if(strcmp(player1, "tesoura")==0 && strcmp(player2, "pedra")==0){
        printf("\nPlayer 2 ganhou por quebrar a tesoura!");
    }else if(strcmp(player1, "tesoura")==0 && strcmp(player2, "tesoura")==0){
        printf("\nDeu empate!");
    }else if(strcmp(player1, "papel")!=0 && strcmp(player1, "pedra")!=0 && strcmp(player1, "tesoura")!=0 ){
        if(strcmp(player2, "papel")!=0 && strcmp(player2, "pedra")!=0 && strcmp(player2, "tesoura")!=0 ){
        printf("\nOs dois digitaram algo errado!");
    }else
        {printf("\nPlayer 1 digitou algo errado!");}
    }else {
        printf("\nPlayer 2 digitou algo errado!");
    }
   return 0;
}

