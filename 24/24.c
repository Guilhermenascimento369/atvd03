#include <stdio.h>
#include<string.h>

char reverse (char txt[100]){
  char a[100],reverse[1000];
  int i,f,c=0;
  f=strlen(txt)-1;
  for(i=0;i<strlen(txt);i++){
      reverse[i]=txt[f];
      f--;
  }
  reverse[i]='\0';
  printf("%s",reverse);
  return 0;
}

int main(void){
char txt[100];
printf("Digite algo para ver a frase invrtida: \n");
fgets(txt,1000,stdin);

reverse(txt);

  return 0;
}
