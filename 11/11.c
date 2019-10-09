#include <stdio.h>

int main(void) {
  int n,cont=0,i=2;
  printf("Digite um número para saber se ele é primo ou não:\n");
  scanf("%d",&n);

  while(i<=n/2){
    if(n%i==0){
    cont++;
    }
    i++;
  }


  if(cont==0){
    printf("É  primo. ");
  }else{
    printf("Não é primo.");
  }
  return 0;
}
