#include <stdio.h>
float fah(void){
  float tc,tf;
  printf("Digite uma temperatura em Fahrenheit para ser convertida para Celsius:\n");
  scanf("%f",&tf);
//tc/5=tf-32/9
  tc=(tf-32)*5/9;

  return tc;
}
int main(void) {
  float tf=fah();
  printf("A temperatura em Celsius é: %f \n",tf);
  return 0;
}
