//3- Mostre na tabela abaixo todos os passos (teste de mesa) e identifique
//qual será a saída do programa em C, para os valores lidos (x = 3 e y = 4).

#include <stdio.h>

void func(int *px, int *py)
{
px = py;
*py = (*py) * (*px);
*px = *px + 2;
}
void main(void)
{
int x, y;
scanf("%d",&x); /*3*/
scanf("%d",&y); /*4*/
func(&x,&y);
printf("x = %d, y = %d", x, y);
}