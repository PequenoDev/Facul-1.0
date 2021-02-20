//1- Implemente a função strcpy (char *destino, char *origem) usando ponteiros.

#include <stdio.h>
#include <string.h>

void strcopy(char *str2, char *str1) 
{
  while(*str1)
  {
    *str2=*str1;
    str1++;
    str2++;
  }   
  *str2='\0';
}

int main() 
{
  char str1[50], str2[50];
 
  gets(str1);

  strcopy(str2,str1);

  printf("A string foi %s", str2);
  return 0;
}