#include <stdio.h>
int main(){
int a=0, b=1, m, i, n,soma;

printf("Digite a quantidade de termos da sequ�ncia de Fibonacci que voc� deseja: ");

scanf("%d", &n);
printf("S�rie de Fibonacci:\n");
printf("%d ", b);
while(i<n){
m=a+b;
a=b;
b=m;
soma=soma+m;
printf("%d ", m);
i++;
}
printf("\nsoma= %d ", soma);
return 0;
}
