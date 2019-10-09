#include <stdio.h>

int main() {
int x=0,l,i,x2;
printf("Digite um valor:\n");
scanf("%d", &l);
for(x=0;x<l;x++){

    if(x*x>l){
       printf("%d\n",x);
       break;
         }
   }

return 0;

}
