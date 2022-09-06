#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float n1, n2, md;
    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    md = (n1 + n2) / 2;
    if(md >= 5){
        printf("Aluno Aprovado!");
    }else{
        printf("Aluno Reprovado!");
    }
    printf("\nMédia final: %.2f", md);
    return 0;
}

