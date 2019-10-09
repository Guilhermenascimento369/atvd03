#include <stdio.h>
#include <string.h>

int main(void) {
  char nome[100];
  int i=0,n=0,c;
  printf("Digite uma frase para a contagem de letras (a)\n");
  fgets(nome,100,stdin);
  do{
    n=nome[i];
    if(n==65 || n==97){
      c++;
    }
    i++;
  }while(i<101);
  printf("Na sua frase há %d letras A",c);
  return 0;
}
