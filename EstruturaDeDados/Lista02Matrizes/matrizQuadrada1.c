//Escreva um algoritmo que leia um inteiro N (0 ≤ N ≤ 100), 
//correspondente a ordem de uma matriz M de inteiros, e construa 
//a matriz de acordo com o exemplo abaixo.

#include <stdio.h>

int main()
{
  int j,o,s,e,x,i,y=1,N,p=0,q=0,r;
  
  while(1)
  {
    scanf("%d", &N);
    if(N==0) break;
    else
    {
      y=1;p=0;q=0;
      int ara[N][N];
      i=N;
      if(N%2==0)
        r=N/2;
      else if(N%2==1)
        r=(N/2)+1;
      
      for(s=1; s<=r; s++)
      {
        for(j=p; j<i; j++)
        {
          for(o=q; o<i; o++)
            ara[j][o]=y;
        }
        y++;
        p++; q++; i--;
      }
      
      for(e=0; e<N; e++)
      {
        for(x=0; x<N; x++)
        {
          if(x==0)
            printf("%3d",ara[e][x]);
          else printf(" %3d",ara[e][x]);
        }
        printf("\n");
      }
        printf("\n");
    }
  }

return 0;
}