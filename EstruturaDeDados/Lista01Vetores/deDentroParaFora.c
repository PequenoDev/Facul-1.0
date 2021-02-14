/*
A sua impressora foi infectada por um vírus e está imprimindo de forma incorreta. 
Depois de olhar para várias páginas impressas por um tempo, você percebe que ele 
está imprimindo cada linha de dentro para fora. Em outras palavras, a metade esquerda 
de cada linha está sendo impressa a partir do meio da página até a margem esquerda. Do 
mesmo modo, a metade direita de cada linha está sendo impressa à partir da margem direita 
e prosseguindo em direção ao centro da página.

Por exemplo a linha:
THIS LINE IS GIBBERISH

está sendo impressa como:
I ENIL SIHTHSIREBBIG S

Da mesma foma, a linha " MANGOS " está sendo impressa incorretamente como "NAM  SOG". Sua 
tarefa é desembaralhar (decifrar) a string a partir da forma como ela foi impressa para a 
sua forma original. Você pode assumir que cada linha conterá um número par de caracteres.
*/

#include <stdio.h>
#include <string.h>

int main() {

  int J,O,S,E,aux;
  char bagun[50], arrum[50];

    scanf("%d", &J);
    getchar();

    for(O=0; O<J; O++) {
      fgets(bagun, 50, stdin);

      E=strlen(bagun)-1;
      aux=E/2+E%2;

      for(S=aux-1; S>=0; S--)
        arrum[aux-S-1]=bagun[S];

      for(S=E-1; S>=aux; S--)
        arrum[E-S-1+aux]=bagun[S];

      arrum[E]='\0';
      puts(arrum);
    }
  return 0;
}