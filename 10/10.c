#include <stdio.h>

int main(void) {
int i=1,fora,dentro,n;

do {
printf("Digite um número:");
scanf("%d",&n);

if((n>=10)&&(n<=50)){
dentro=dentro+1;
}
else{
  fora=fora+1;
}
i++;
   }while(i<=10);

printf("Há %d números dentro do intervalo\n",dentro);
printf("Há %d números fora do intervalo\n",fora);

return 0;
}
