#include <stdio.h>

int main(){
int i, num;

printf("Digite um numero: ");
scanf("%d", &num);
for (i=1;i<=10;i=i+1){
printf("%d x %d = %d\n", num,
i, num*i);
}
return 0;
}
