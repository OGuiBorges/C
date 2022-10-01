#include <stdio.h>

int main (){

  int n1, n2, r, rep, i, tabuada;

  printf ("Digite o primeiro valor: ");
  scanf ("%d.\n", &n1);

  printf ("Digite o segundo valor: ");
  scanf ("%d.\n", &n2);

  r=n1+n2;

  printf ("O resultado da soma e: %d.\n", r);

  if(r<10)
  {
      printf ("menor que 10 \n");
  }
  else
    {
        printf ("maior que 10 \n");
    }

    while (rep != 10){

        printf ("Digite 10: ");
        scanf ("%d.\n", &rep);
    }

    for (i=0; i<10; i++){

        printf ("Digite o %dº:", i);
        scanf ("%d.\n", &tabuada);
    }

  return 0;
}

