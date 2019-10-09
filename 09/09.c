#include <stdio.h>

int main(void) {
int i,soma=0,media,n=0;
printf("Média aritimética dos números pares do intervalo :\n");
for(i=13;i<=73;i++){
  printf(" %d" ,i);

  if(i%2==0){
n=n+1;
soma=soma+i;
}

}
media=soma/n;
printf("\nNúmero de termos pares: %d \n",n);
printf("Soma dos termos pares: %d \n",soma);
printf("A média da soma dos numeros pares no intervalo  foi: %d\n",media);
return 0;
}
