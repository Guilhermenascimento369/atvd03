#include<stdio.h>

int main() {
int i=0,n=0,div=0,f;
int primo[12];
   printf("Sequ�ncia do primeiro ao d�cimo segundo n�meros primos:\n");
for(i=0;i<=100;i++){
 div=0;
  for(n=1;n<=i;n++) {
    if(i%n==0){
       div=div+1;
 }
}
    if(div==2) {
     printf(" %d\n", i);
    primo[f]=i;
    f++;
  }
  if(f==12) break;
		div= 0;
}
printf("A diferen�a entre o sexto e o d�cimo segundo n�meros primos �:\n%d - %d = %d",primo[11],primo[5],primo[11]-primo[5]);



return 0;
}
