#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    int i = 10;
    int max;
    printf("Digite um número: ");
    scanf("%d", &max);
    if(max >= i){
        while(i <= max){
          if(i % 2 == 0){
        printf("%d\n", i);
          }
          i++;
        }}else{
            while(i > max){
          if(i % 2 == 0){
        printf("%d\n", i);
          }
          i--;
        }}


    return 0;
}
