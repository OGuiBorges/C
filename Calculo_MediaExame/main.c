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
    if(md >= 6){
        printf("Aprovado");
        printf("\nSua média foi: %.1f", md);
    }else if(md < 3){
        printf("Reprovado");
        printf("\nSua média foi: %.1f", md);
    }else{
        printf("Exame");
        printf("\nSua média foi: %.1f", md);
    }
    return 0;
}
