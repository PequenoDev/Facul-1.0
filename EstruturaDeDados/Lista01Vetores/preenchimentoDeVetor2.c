//Faça um programa que leia um valor T e preencha 
//um vetor N[1000] com a sequência de valores de 0
//até T-1 repetidas vezes, conforme exemplo abaixo.
//Imprima o vetor N.

#include <stdio.h>

int main() {
  int n[1000], i;
  int valor, aux;

    scanf("%d", &valor);
    aux=0;
    while(aux<999){
      for(i=0; i<valor; i++) {
        n[i]=i; 
        aux++; 
      }
    } 

    for(i=0; i<1000; i++) {
      printf("N[%d] = %d\n",i,n[i]);
    }
       
  return 0;
}