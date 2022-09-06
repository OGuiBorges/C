#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nome[256];
    int idade;

    printf("Qual seu nome?\n");
    scanf("%s", nome);
    printf("Digite sua idade\n");
    scanf("%d", &idade);

    printf("O seu nome comeca com %c.\nSua idade e: %d anos.\n",nome[0], idade);
    if(idade >= 18){
        printf("Autorizado a tirar habilitacao!");
    }else if(idade < 14){
        printf("Ainda nao pode tirar nenhuma habilitacao!");
    }else{
        printf("Autorizado a tirar ACC(Autorizacao para conduzir Ciclomotores), porem nao pode tirar habilitacao!");
    }

    return 0;
}
