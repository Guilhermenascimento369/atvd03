#include <stdio.h>
#include<string.h>

int main(void) {
 char a[100],inverte[1000],txt[100];
 int i,f,c=0;
 printf("Digite algo para ver a frase invertida: \n");
fgets(txt,1000,stdin);
  f=strlen(txt)-1;
  for(i=0;i<strlen(txt);i++){
     inverte[i]=txt[f];
      f--;
  }
inverte[i]='\0';
  printf("%s",inverte);


  return 0;

}
