//1- Escreva uma função que receba um vetor, o tamanho do vetor e um valor n 
//como argumentos e retorne a quantidade de vezes que o valor n aparece no vetor. 

#include<stdio.h>

int frequencia(int *vetor, int tamanho, int valor)
{
	int i, frequencia=0;
	
	for(i=0; i<tamanho; i++)
  {
		if( *vetor == valor )
    {
			frequencia++;
		}
		vetor++;
	}
	return frequencia;
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
	
	printf("O valor %d aparece %d no vetor", valor, frequencia(vetor, tamanho, valor));
}