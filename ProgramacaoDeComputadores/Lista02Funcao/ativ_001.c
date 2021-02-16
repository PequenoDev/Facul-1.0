//1- Implemente a função strcpy (char *destino, char *origem) usando ponteiros.

#include <stdio.h>
#include <string.h>

void strcopy(char *str2, char *str1) {
  
}

int main() {
  char str1[50], str2[50];
 
  scanf("%s%s", str1, str2);
  getchar();
  printf("%s\n%s", str1, str2);

  strcopy(str1,str2);
  return 0;
}