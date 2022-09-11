#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    float d;
    setlocale(LC_ALL, "Portuguese_Brazil");
    printf("DISTÂNCIAS\n");
    printf("Digite a distância: ");
    scanf("%f", &d);
    printf("A medida de %.1fm corresponde a: \n", d);
    printf("%.5fKm\n",d / 1000);
    printf("%.4fHm\n",d / 100);
    printf("%.3fDam\n",d / 10);
    printf("%.1fdm\n",d * 10);
    printf("%.1fcm\n",d * 100);
    printf("%.1fmm\n",d * 1000);
    return 0;
}
