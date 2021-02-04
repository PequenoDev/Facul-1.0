//5- Escreva um programa em C, utilizando o conceito de funções, 
//que leia N números inteiros (sendo N informado pelo usuário), 
//calcule e imprima o valor absoluto de cada valor de entrada.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int valor_absoluto(int n) {
  int i, x, valor;

  for(i=0; i<n; i++) {
    printf("\nDigite um valor: ");
    scanf("%d", &x);
    valor=abs(x);
    printf("O valor absoluto de %d é %d", x, valor);
  }
}

int main() {
  setlocale(LC_ALL, "");
  int n;

  printf("Informe quantos números você deseja calcular: ");
  scanf("%d", &n);

  valor_absoluto(n);

  return 0;
}
