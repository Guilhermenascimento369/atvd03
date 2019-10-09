#include <stdio.h>
#include <stdlib.h>
#include <time.h>

 void rands(int menor,int maior){
  int i= (rand()%(maior-menor+1))+menor,random;
  printf("%d",i);

}

int main(void) {
  int menor=0,maior=0,x;
   printf("Digite o primeiro número do intervalo:\n");
   scanf("%d",&menor);
    printf("Digite o segundo número do intervalo:\n");
    scanf("%d",&maior);
    srand(time(0));

  printf("Hello World:[%d,%d]= \n",menor,maior);
  rands(menor,maior);
  return 0;
}
