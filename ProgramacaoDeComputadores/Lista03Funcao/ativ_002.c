//2- Escreva uma função que receba um vetor, o tamanho do vetor e um valor n como 
//argumentos e retorne a posição da primeira ocorrência do valor n no vetor. 
//Retorne -1 caso o valor não seja encontrado.

#include<stdio.h>

int funcao(int *vetor, int tamanho, int valor)
{
	int i;
	
	for(i=0; i<tamanho; i++)
  {
		if( *vetor == valor )
    {
			return i;
		}
		vetor++;
	}
  return -1;
}

int main()
{
	int tamanho, i, valor;
	
	printf("Digite o tamanho do vetor: ");
	scanf("%d", &tamanho);
	
	int vetor[tamanho];
	
	printf("Digite os valores do vetor:\n");
	for(i=0; i<tamanho; i++)
  {
		printf("--> ");
		scanf("%d", &vetor[i]);
	}
	
	printf("Digite o valor que deseja pesquisar a frequencia: ");
	scanf("%d", &valor);
	
	printf("%d", funcao(vetor, tamanho, valor));
}
