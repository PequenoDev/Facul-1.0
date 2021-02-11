//Faça um programa que leia um valor N. Este N será o tamanho 
//de um vetor X[N]. A seguir, leia cada um dos valores de X, 
//encontre o menor elemento deste vetor e a sua posição dentro 
//do vetor, mostrando esta informação.

#include <stdio.h>

int main() {

  int i, n, pos, menor;

    scanf("%d", &n);
    int vetor[n];
    
    for(i=0; i<n; i++) {
      scanf("%d", &vetor[i]);
      menor=vetor[0];
    }

    for(i=1; i<n; i++) {
      if(menor>vetor[i]) {
        menor=vetor[i];
        pos=i;
      }
    }
    printf("Menor valor: %d\nPosicao: %d\n", menor, pos);

    return 0;
}
