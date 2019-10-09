#include <stdio.h>
#include <stdlib.h>

int funcao(){
  //
    char dado[40], cop[40];
    int i, comp, j;
    printf("Imprimir um gráfico na horizontal: \n");
    printf("insira os dados: ");

    fgets(dado, 40, stdin);
    comp = strlen(dado)-1;

    for(i=0; i<=comp; i++){
        if(dado[i]>=48 && dado[i]<=57){
            int k = dado[i] - 48;
            for(j=0; j<k; j++){
                printf("*");
           }
            printf("\n");
        }
    }
//
}
int main(){

   funcao();
   return 0;
}
