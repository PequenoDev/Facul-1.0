//Faça um programa que leia um valor T e preencha 
//um vetor N[1000] com a sequência de valores de 0
//até T-1 repetidas vezes, conforme exemplo abaixo.
//Imprima o vetor N.

#include <stdio.h>
int main()
{
    int n[1000], valor, i,x;

    scanf ("%d", &valor);

    for(i=0,x=0; i<1000; i++)
    {
        printf("N[%d] = %d\n",i,x);
        x++;
        if(x==valor)
            x=0;
    }
    return 0;
}