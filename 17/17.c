#include <stdio.h>

int cel(void){
  float fa,cel;
  printf("Digite a temperatura em Celsius para que ela seja convertida para Fahrenheit: \n");
  scanf("%f",&cel);
  //tc-0/100-0=tf-32/212-32
//tc/5=tf-32/9
fa=9*(cel/5)+32;
return fa;
}

int main(void) {
  float tc=cel();
  printf("A temperatura em Farhenheit é: %3.2f\n",tc);
  return 0;
}
