//6- Escreva um programa em C, utilizando o conceito de funções, 
//que leia N números inteiros (sendo N informado pelo usuário) e realize as seguintes ações:
//1) Verificar se cada valor de entrada é inteiro e positivo (utilize uma função para isso);
//2) Escreva a soma dos seus divisores, exceto o próprio número (utilize uma função para isso).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int inteiro(n) {
  int i, x;

  for(i=0; i<n; i++) {
    printf("Digite o valor desejado: ");
    scanf("%d", &x);

    if(x>0 && x-(int)x==0) {
      printf("O valor é inteiro e positivo");
    }else{
      printf("Deu merda");
    }
  }
}

int main() {
  setlocale(LC_ALL, "");
  int n;

  printf("Informe quantos números você deseja calcular: ");
  scanf("%d", &n);

  inteiro(n);

  return 0;
}