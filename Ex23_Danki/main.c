#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    int vi, vf, i;
    printf("Digite o valor inicial da sequ�ncia: ");
    scanf("%d", &vi);
    printf("Digite o valor final da sequ�ncia: ");
    scanf("%d", &vf);
    printf("Digite o valor de salto da sequ�ncia: ");
    scanf("%d", &i);
    if(vi < vf){
    for(int j = vi; j < vf; j+=i){
        printf("%d\n", j);
    }}else if(vi > vf){
        for(int j = vi; j > vf; j-=i){
        printf("%d\n", j);
    }
    }else{
        printf("N�meros de inicio e final iguais!");
    }

    return 0;
}
