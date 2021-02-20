//4- Escreva uma função que substitua todos os valores de um vetor 
//por seu respectivo módulo. 

#include <stdio.h>

void funcao(int *vetor)
{
  int i;

  for(i=0; i<10; i++)
  {
    if(*vetor<0){
      *vetor=*vetor * -1;
    }
    vetor++;
  }
}

int main()
{
  int vetor[10], i;

  printf("Insira os valores do vetor:\n");
  for(i=0; i<10; i++)
  {
    scanf("%d", &vetor[i]);
  }

  funcao(vetor);

   for(i=0; i<10; i++)
  {
    printf("%d ", vetor[i]);
  }

  return 0;
}
