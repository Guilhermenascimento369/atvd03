#include <stdio.h>

int main(void) {

  int a=1000,b,c=0;

for(a>=1000;a<2000;a++){
  b=a%11;
  if(b==5){
  c++;
   printf("O número %d dividido por 11 tem resto =5\n",a);

  }
  if(c==20) break;

     }
  return 0;
}
