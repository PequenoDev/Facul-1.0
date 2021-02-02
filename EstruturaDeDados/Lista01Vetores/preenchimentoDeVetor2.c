#include <stdio.h>

int main() {
  int n[10], i;
  int valor, aux;

    scanf("%d", &valor);
    
    while(aux<10){
      for(i=0; i<valor; i++) {
        n[i]=i; 
        printf("%d\n", n[i]);
        aux++; 
      }
    } 
       
  return 0;
}