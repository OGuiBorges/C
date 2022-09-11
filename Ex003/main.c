#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    char nome[255] = "";
    float salario;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("INFORMAÇÃO DE FUNCIONÁRIO\n");
    printf("Digite seu nome: ");
    gets(nome);
    printf("Salário: R$");
    scanf("%f", &salario);
    printf("O funcionário %s tem um salário de R$%.2f em Setembro!", nome, salario);
    return 0;
}
