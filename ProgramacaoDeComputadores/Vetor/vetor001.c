//Leia um vetor com 15 números inteiros. Armazene em um segundo vetor a ordenação do primeiro da seguinte
//forma, ressaltando que 1º indica o menor valor e 15º indica o maior valor:

#include <stdio.h>
#include <stdlib.h>

int main(){

  int v[15];
  int i, x, aux;

  printf("--> Insira os dados do vetor:\n");

  //Leitura de dados
  for(i=0; i<15; i++) {
    scanf("%d", &v[i]);
  }

  //Ordenar o vetor em ordem crescente
  for(i=0; i<15; i++) {
    for(x=i+1; x<15; x++) {
      if(v[i]>v[x]) {
        aux=v[i];
        v[i]=v[x];
        v[x]=aux;
      }
    }
  }

  //Separacao de dados em posicoes impares
  for(i=14; i>=0; i--) {
    if(i%2!=0) {
     printf("%d ", v[i]);
    }
  }
  //Separacao de dados em posicoes pares
  for(i=0; i<=14; i++) {
    if(i%2==0) {
      printf("%d ", v[i]);
    }
  }

  return 0;
}

