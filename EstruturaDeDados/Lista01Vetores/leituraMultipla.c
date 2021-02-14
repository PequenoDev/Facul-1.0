/*
Em diversos sistemas de computação, vários processos podem ler de um mesmo recurso 
durante o mesmo ciclo de máquina, mas somente um processo pode escrever no recurso 
durante o ciclo de máquina. Leituras e gravações não podem se misturar em um mesmo 
ciclo de máquina. Dado um histórico de leituras e gravações que ocorreram durante a 
execução de um determinado processamento, e um número inteiro que representa o número 
de processos usados, calcule a duração mínima do processamento, em ciclos de máquina. 
O rastro de histórico representa cada leitura por uma letra 'R' e cada gravação por uma 
letra 'W'.

Por exemplo, se o rastro de histórico é "RWWRRR" e o número de processos é 3, então o 
número mínimo de ciclos de máquina será 4: um para a primeira leitura, um para cada uma 
das gravações e apenas um para todo o último grupo de leituras.
*/

#include <stdio.h>

int main() {

  int J,O,S,E;
  char lin[50];

    while(scanf("%[^\n]%*c", &lin)!=EOF) {
      scanf("%d%*c", &J);
      O=S=0;
        for(E=0; lin[E]!='\0'; E++) {
          if(lin[E]=='W') {
            S++;
              if(O>0) {
                O=0;
                S++;
              }
          } else {
            O++;
              if(O==J) {
                S++;
                O=0;
              }
          }
        }

        if(O>0) S++;
        printf("%d\n", S);
    }
  return 0;
}