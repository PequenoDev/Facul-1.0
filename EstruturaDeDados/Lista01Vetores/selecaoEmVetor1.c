//Faça um programa que leia um vetor A[100]. No final, mostre todas 
//as posições do vetor que armazenam um valor menor ou igual a 10 e o 
//valor armazenado em cada uma das posições.

#include <stdio.h>

int main() {
  float vetor[100];
  int i;

    for(i=0; i<100; i++) {
      scanf("%f", &vetor[i]);
        if(vetor[i]<=10) {
          printf("A[%d] = %.1f\n", i, vetor[i]);
        }
    }
  return 0;
}