#include <stdio.h>

int main(void) {
int i=1,fora,dentro,n;

do {
printf("Digite um n�mero:");
scanf("%d",&n);

if((n>=10)&&(n<=50)){
dentro=dentro+1;
}
else{
  fora=fora+1;
}
i++;
   }while(i<=10);

printf("H� %d n�meros dentro do intervalo\n",dentro);
printf("H� %d n�meros fora do intervalo\n",fora);

return 0;
}
