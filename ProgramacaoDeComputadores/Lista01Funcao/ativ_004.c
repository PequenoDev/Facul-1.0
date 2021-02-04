//4- Escreva uma função em C que receba como parâmetros um valor de base 
//e seu expoente e retorne o valor da potência.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int potenciacao(int base, int expoente) {
  int potencia;

  potencia = pow(base,expoente);

  printf("O valor obtido pele potenciação é %d.", potencia);

}

int main() {
  setlocale(LC_ALL, "");
  int base, expoente;
  int potencia;

  printf("Digite a base e seu expoente para calcular a potência:\n");
  scanf("%d %d", &base, &expoente);

  potenciacao(base,expoente);

  return 0;
}