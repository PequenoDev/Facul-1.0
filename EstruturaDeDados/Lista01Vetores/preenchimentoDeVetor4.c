//Neste problema você deverá ler 15 valores colocá-los em 2 
//vetores conforme estes valores forem pares ou ímpares. Só 
//que o tamanho de cada um dos dois vetores é de 5 posições. 
//Então, cada vez que um dos dois vetores encher, você deverá 
//imprimir todo o vetor e utilizá-lo novamente para os próximos 
//números que forem lidos. Terminada a leitura, deve-se imprimir 
//o conteúdo que restou em cada um dos dois vetores, imprimindo 
//primeiro os valores do vetor impar. Cada vetor pode ser preenchido 
//tantas vezes quantas for necessário.

#include <stdio.h>

int main() {

  int par[5], impar[5], vetor[15];
  int a, b, x, n, p, i; 
  int j=0, o=0, s=0, e=0;

  for(b=0; b<15; b++) {
    scanf("%d", &vetor[b]);
  }

  for(a=0; a<15; a++) {
    if(j==5) {
      for(n=0; n<5; n++)
        printf("impar[%d] = %d\n", n, impar[n]);
      j=0;
    }

    if(o==5) {
      for(p=0; p<5; p++)
        printf("par[%d] = %d\n", p, par[p]);
      o=0;
    }

    if(vetor[a]%2!=0) {
      impar[s]=vetor[a];
      ++s;
      j++;
      if(s==5) s=0;
    }

    if(vetor[a]%2==0) {
      par[e]=vetor[a];
      ++e;
      o++;
      if(e==5) e=0;
    }
  }

  for(i=0; i<j; i++) {
    printf("impar[%d] = %d\n", i, impar[i]);
  }

  for(x=0; x<o; x++) {
    printf("par[%d] = %d\n", x, par[x]);
  }

  return 0;
}