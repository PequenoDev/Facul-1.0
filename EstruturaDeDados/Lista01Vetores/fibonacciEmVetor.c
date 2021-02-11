//Faça um programa que leia um valor e apresente o número de 
//Fibonacci correspondente a este valor lido. Lembre que os 2 
//primeiros elementos da série de Fibonacci são 0 e 1 e cada próximo 
//termo é a soma dos 2 anteriores a ele. Todos os valores de Fibonacci 
//calculados neste problema devem caber em um inteiro de 64 bits sem sinal.

#include<stdio.h>
int main() {

   long long int n, prim = 0, seg = 1, prox, x;
   int i,j;

    scanf("%d", &j);
    for(i=1; i<=j; i++, prim = 0, seg = 1) {

       scanf("%lld",&n);
       n=n+1;
       for ( x = 0 ; x < n ; x++ ) {
          if (x <= 1) {
            prox = x;
          } else {
             prox = prim + seg;
             prim = seg;
             seg = prox;
          }
        }
      printf("Fib(%lld) = %lld\n",n-1,prox);
    }

   return 0;
}