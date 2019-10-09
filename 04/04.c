#include <stdio.h>

int main()
{
int x,i=1;
printf("Digite um inteiro: \n");
scanf("%d",&x);
while(i<=x){

if (x%i==0){
  printf(" %d é divisor de %d \n",i,x);
  }
  i++;
}

return 0;
}
