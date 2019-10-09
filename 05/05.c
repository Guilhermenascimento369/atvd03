#include <stdio.h>

int fatorial(int x) {
int prod=1;
int i;

if(x==0){
return 1;

}
for (i=1;i<=x;i++){
  prod=prod*i;
}
  return prod;
}
int main (){
    int n;
  printf("Digite um número:\n");
  scanf("%d",&n);

  printf("Fatorial(%d) = %d=\n",n,fatorial(n));

return 0;
}
