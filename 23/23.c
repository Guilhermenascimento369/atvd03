#include <stdio.h>
#include<string.h>
int main(void) {
  int i=0,a,b, caractere=0,palavra=0;
  char txt[1000];

  printf("Insira o texto para a contagem de palavras e caracteres:\n");
  fgets(txt,1000,stdin);
  a=strlen(txt);
  while(i<strlen(txt)+1){
    b=txt[i];
    if(b!=32){
      caractere++;

    }else{
      palavra=palavra+1;
    }
    i++;
  }
  printf("Palavras: %d / Caracteres: %d",palavra+1,caractere-2);


  return 0;
}
