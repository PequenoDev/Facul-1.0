//Leia um caractere maiúsculo, que indica uma operação que deve ser 
//realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma 
//ou a média considerando somente aqueles elementos que estão na área 
//inferior da matriz, conforme ilustrado abaixo (área verde).

#include <stdio.h>
int main()
{
  double x=0.0, M[12][12];
  char J[2];
  int i,l,c,y,cont=6,q=5;
  scanf("%s", &J);

  for(l=0;l<=11; l++)
  {
    for(c=0; c<=11; c++)
      scanf("%lf", &M[l][c]);
  }

  for(y=7; y<=11; y++)
  {
    for(i=q; i<=cont;i++)
      x+=M[y][i];
    cont++;
    q--;
  }
  
  if(J[0]=='S')
    printf("%.1lf\n", x);
  else if(J[0]=='M')
  {
    x=x/30.0;
    printf("%.1lf\n", x);
  }  

return 0;
}