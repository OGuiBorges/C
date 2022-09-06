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
        Sleep(500);
        printf(".");
        contador++;
    }

    if(strcmp(player1,"papel")==0){
        if(strcmp(player2, "papel")==0){
            printf("\nEita, deu empate!");
        }else if(strcmp(player2, "pedra")==0){
            printf("\nPlayer 1 ganhou pois papel embrulha pedra!");
        }else if(strcmp(player2, "tesoura")==0){
            printf("\nPlayer 2 ganhou pois cortou o papel!");
        }else{
            printf("\nAlguem digitou algo diferente de pedra, papel ou tesoura!");
        }
    }else if(strcmp(player1,"pedra")==0){
        if(strcmp(player2,"papel")==0){
            printf("\nPlayer 2 ganhou pois papel embrulha pedra!");
        }else if(strcmp(player2, "pedra")==0){
            printf("\nEita, deu empate!");
        }else if(strcmp(player2, "tesoura")==0){
            printf("\nPlayer 1 ganhou pois quebrou a tesoura!");
        }else{
            printf("\nAlguem digitou algo diferente de pedra, papel ou tesoura!");
        }
    }else if(strcmp(player1, "tesoura")==0){
        if(strcmp(player2,"papel")==0){
            printf("\nPlayer 1 ganhou pois cortou o papel!");
        }else if(strcmp(player2, "pedra")==0){
            printf("\nPlayer 2 ganhou pois quebrou a tesoura!");
        }else if(strcmp(player2, "tesoura")==0){
            printf("\nEita, deu empate!");
        }else{
            printf("\nAlguem digitou algo diferente de pedra, papel ou tesoura!");
        }
    }else{
        printf("\nAlguem digitou algo diferente de pedra, papel ou tesoura!");
    }

   return 0;
}

