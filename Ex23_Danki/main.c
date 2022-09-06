#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int vi, vf, i;
    printf("Digite o valor inicial da sequência: ");
    scanf("%d", &vi);
    printf("Digite o valor final da sequência: ");
    scanf("%d", &vf);
    printf("Digite o valor de salto da sequência: ");
    scanf("%d", &i);
    if(vi < vf){
    for(int j = vi; j < vf; j+=i){
        printf("%d\n", j);
    }}else if(vi > vf){
        for(int j = vi; j > vf; j-=i){
        printf("%d\n", j);
    }
    }else{
        printf("Números de inicio e final iguais!");
    }

    return 0;
}
