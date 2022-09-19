#include "stdio.h"
int main ()
{
    int i,cma=0,cme;
    float s,acs=0,ms;

    for(i=1; i<=10; i++)
    {
        printf("informe o salario %d:",i);
        scanf("%f",&s);

        if(s>=2000)
        {
            cma=cma+1;
        }
        else
        {
            cme=cme+1;
        }
        acs = acs + s;
    }
    ms=acs/10;


    printf("salarios acima de R$2000,00: %d\n",cma);
    scanf("salarios abaixo de R$2000,00:%d\n",cme);
    printf("media geral dos salarios:%.2f",ms);




    return 0;
}
