//Leia um valor e faça um programa que coloque o valor 
//lido na primeira posição de um vetor N[10]. 
//Em cada posição subsequente, coloque o dobro do valor da 
//posição anterior. Por exemplo, se o valor lido for 1, os valores 
//do vetor devem ser 1,2,4,8 e assim sucessivamente. Mostre o 
//vetor em seguida.

#include <stdio.h>

int main() {
  int n[10],valor;
  int i;

    scanf("%d",&valor);

    n[0]=valor;
    for(i=1; i<10; i++) {
      n[i]=valor*2;
      valor=n[i];
    }

    for(i=0; i<10; i++) {
      printf("N[%d] = %d\n",i,n[i]);
    }

  return 0;
}