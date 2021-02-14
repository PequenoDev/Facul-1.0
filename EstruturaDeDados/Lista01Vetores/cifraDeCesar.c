//Júlio César usava um sistema de criptografia, agora conhecido 
//como Cifra de César, que trocava cada letra pelo equivalente em 
//duas posições adiante no alfabeto (por exemplo, 'A' vira 'C', 'R' 
//vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo, 
//isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras 
//com quaisquer número de posições.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

  int J,O,S,E,tam;
  char cesar[50];

    scanf("%d", &J);

    for(S=0; S<J; S++) {
      scanf("%s", cesar);
      scanf("%d", &O);

      for(E=0, tam=strlen(cesar); E<tam; E++) {
        toupper(cesar[E]);
        if(cesar[E]-O<65) {
          cesar[E]=cesar[E]+26;
        }
        cesar[E]=cesar[E]-O;
        printf("%c", cesar[E]);
      }
      printf("\n");
    }
  return 0;
}