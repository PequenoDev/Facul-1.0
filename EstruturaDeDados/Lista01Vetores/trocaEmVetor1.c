//Faça um programa que leia um vetor N[20]. Troque a seguir, 
//o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., 
//até trocar o 10º com o 11º. Mostre o vetor modificado.

#include <stdio.h>

int main() {
  int vetor[20], i, j, aux;

    for(i=0; i<20; i++) {
      scanf("%d", &vetor[i]);
    }

    for(i=0, j=19; i<10; i++, j--) {
      aux=vetor[i];
      vetor[i]=vetor[j];
      vetor[j]=aux;
    }

    for(i=0; i<20; i++) {
      printf("N[%d] = %d\n", i, vetor[i]);
    }

    return 0;
}