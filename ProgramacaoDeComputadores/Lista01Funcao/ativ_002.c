/*
2- Escreva um programa em C, que através do uso de funções, solicite o total 
gasto pelo cliente de uma loja, imprime as opções de pagamento, solicita a 
opção desejada e imprime o valor total das prestações (se houverem).

1) Opção: a vista com 10% de desconto
2) Opção: em duas vezes (preço da etiqueta)
3) Opção: de 3 até 10 vezes com 3% de juros ao mês (somente para compras acima de R$ 100,00). 
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void valor_a_pagar(int op, float valor) {
  int parcelas;

  switch (op)
  {
  case 1:
    printf("O valor a ser pago é de R$ %.2f\n", valor*0.90);
    break;

  case 2:
    printf("O valor a ser pago é 2x de R$ %.2f\n",valor/2);
    break;

  case 3:
    if(valor>100){
      printf("Escolha o número de parcelas:");
      scanf("%d", &parcelas);
      printf("O valor a ser pago é %dx R$ %.2f (Valor final R$ %.2f)\n", parcelas, (valor/parcelas)+(valor*0.03), (valor*0.03*parcelas)+valor);
    }else{
      break;
    }
    break; 
  
  }
}

void formas_de_pagamento(float valor) {
  int op;

  printf("---->Forma de Pagamento:\n"
         "--->1) A vista com 10%% de desconto\n"
         "--->2) Em duas vezes (preço da etiqueta)\n"
         "--->3) De 3 até 10 vezes com 3%% de juros ao mês (somente para compras acima de R$ 100,00)\n");

         scanf("%d", &op);

      valor_a_pagar(op, valor);
}

int valor_da_compra() {
  float valor;

  scanf("%f", &valor);
  printf("O valor da compra foi de %.2f\n", valor);

  formas_de_pagamento(valor);
}

int main() {
  setlocale(LC_ALL, "");

  valor_da_compra();
  
  return 0;
}