//2- Implemente a função strcmp (char *str1, char *str2) usando ponteiros.

#include <stdio.h>
#include <string.h>
#include <locale.h>

void StrCmp(char *str1, char *str2)
{
  int tam1, tam2;

  tam1=strlen(str1);
  tam2=strlen(str2);

  if(tam1==tam2)
  {
    while(*str1)
    {
      if(*str1!=*str2)
      {
        printf("As strings são diferentes.\n");
        return;
      }
      else
      {
        str1++;
        str2++;
      }
    }
    printf("As strings são iguais.\n");
  }
  else
  {
    printf("As strings são diferentes.\n");
  }
  printf("%d", tam1);
}

int main()
{
  setlocale(LC_ALL, "");
  char str1[50], str2[50];

  gets(str1);
  gets(str2);

  StrCmp(str1,str2);

  return 0;
}