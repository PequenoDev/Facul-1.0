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