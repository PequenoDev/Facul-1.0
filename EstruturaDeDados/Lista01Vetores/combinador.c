//Implemente um programa denominado combinador, que recebe duas 
//strings e deve combiná-las, alternando as letras de cada string, 
//começando com a primeira letra da primeira string, seguido pela 
//primeira letra da segunda string, em seguida pela segunda letra da 
//primeira string, e assim sucessivamente. As letras restantes da 
//cadeia mais longa devem ser adicionadas ao fim da string resultante e retornada.

#include <stdio.h>
#include <string.h>

int main() {

  char str1[50], str2[50], res[100];
  int J,O,S,E;
  int len1, len2;

    scanf("%d", &J);

    for(O=0; O<J; ++O) {
      scanf("%s%s", str1, str2);

      len1=strlen(str1);
      len2=strlen(str2);

        for(S=0, E=0; S<len1 && S<len2; ++S, E+=2) {
          res[E]=str1[S];
          res[E+1]=str2[S];
        }

        for(; S<len1; ++S, ++E)
          res[E]=str1[S];

        for(; S<len2; ++S, ++E)
          res[E]=str2[S];

        res[E]='\0';

        puts(res);
    }
  return 0;
}