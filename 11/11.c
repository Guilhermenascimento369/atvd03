#include <stdio.h>

int main(void) {
  int n,cont=0,i=2;
  printf("Digite um n�mero para saber se ele � primo ou n�o:\n");
  scanf("%d",&n);

  while(i<=n/2){
    if(n%i==0){
    cont++;
    }
    i++;
  }


  if(cont==0){
    printf("�  primo. ");
  }else{
    printf("N�o � primo.");
  }
  return 0;
}
