//Leia um valor X. Coloque este valor na primeira posição de 
//um vetor N[100]. Em cada posição subsequente de N (1 até 99), 
//coloque a metade do valor armazenado na posição anterior, 
//conforme o exemplo abaixo. Imprima o vetor N.

#include <stdio.h>

int main() {
  double N[100], x;
  int i;

  scanf("%lf",&x);
  N[0]=x;
  for(i=1; i<100; i++) {
    N[i]=x/2;
    x=N[i];
  }

  for(i=0; i<100; i++) {
    printf("N[%d] = %.4lf\n",i, N[i]);
  }
  return 0;
}