#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[255] = "";
    float salario;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("INFORMA��O DE FUNCION�RIO\n");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Sal�rio: R$");
    scanf("%f", &salario);
    printf("O funcion�rio %s tem um sal�rio de R$%.2f em Setembro!", nome, salario);
    return 0;
}
