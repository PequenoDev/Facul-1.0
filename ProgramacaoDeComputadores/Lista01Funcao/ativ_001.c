//1- Escreva uma função que receba dois números inteiros retorne o menor número;

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int menor() {
  setlocale(LC_ALL, "");
  int a, b;

  scanf("%d %d", &a,&b);
  if(a<b) {
    printf("O menor número é %d", a);
  }
  else{
    printf("O menor número é %d", b);
  }
}

int main() {
  setlocale(LC_ALL, "");
  
  menor();

  return 0;
}