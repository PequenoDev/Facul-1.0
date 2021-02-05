//6- Escreva um programa em C, utilizando o conceito de funções, 
//que leia N números inteiros (sendo N informado pelo usuário) e realize as seguintes ações:
//1) Verificar se cada valor de entrada é inteiro e positivo (utilize uma função para isso);
//2) Escreva a soma dos seus divisores, exceto o próprio número (utilize uma função para isso).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <stdbool.h>

bool inteiro(float valor) {

  if((valor>=0) && (valor==(int)valor)) {
    return true;
  }else{
    return false;
  }
}

float soma_divisores(float num) {
  int i, soma=0;

  if(inteiro(num)==false) {
    printf("O valor não é inteiro e positivo.");
  }else {
    for(i=(int)num-1; i>=1; i--) {
      if((int)num%i==0) {
        soma=soma+i;
      }
    }
  }
  return soma;
}

int main() {
  setlocale(LC_ALL, "");
  float num, i, res;

  do {
    printf("Informe um valor, ou -1 para sair \n");
    scanf("%f", &num);
    res=soma_divisores(num);
    printf("A soma dos divisores: %f", res);
  }while (num!=-1);

  return 0;
}