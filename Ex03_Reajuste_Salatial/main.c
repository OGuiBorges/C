#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>


int main()
{
    setlocale(LC_ALL, "Portuguese_Brazil");
    float sa, vr, sf;
    int temp = 0;
    printf("Digite seu salario: R$");
    scanf("%f", &sa);
    vr = sa * 0.1;
    sf = sa + vr;
    printf("Calculando reajuste e salario");
    while(temp < 3){
        Sleep(300);
        printf(".");
        temp++;
    }
    printf("\nValor do reajuste: R$%.2f \n", vr);
    printf("Salario final: R$%.2f", sf);
    return 0;
}
