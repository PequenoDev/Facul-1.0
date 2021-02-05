//3- Escreva um código em C, usando o conceito de funções, que calcule e imprima a 
//distância entre dois pontos (x1,x2) e (y1,y2).

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

float distancia() {
  float x1, x2, y1, y2;
  float distancia;

  printf("Digite as coordenadas do primeiro ponto:");
  scanf("%f %f", &x1, &y1);

  printf("Digite as coordenadas do segundo ponto:");
  scanf("%f %f", &x2, &y2);

  distancia = sqrt (pow(x2-x1,2)+pow(y2-y1,2));

  printf("A distancia entres os pontos é %.2f", distancia);
}

int main() {
  setlocale(LC_ALL, "");

  distancia();
  
  return 0;
}