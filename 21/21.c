#include <stdio.h>
#include <string.h>

int main() {
  int n, j=0, i, linha, coluna;
  char cop[40], ver[40];

    for(i=0; i<40; i++){
        cop[i] = 0;
        ver[i] = 0;
    }

  printf("Desenhar um gráfico na vertical: \n");
  printf("insira os dados: ");
  fgets(cop, 40, stdin);

    for(i=0; i<strlen(cop); i++){
		if(cop[i]>=48 && cop[i]<=57){
			ver[j] = cop[i];
			j++;
		}
	}

    n = strlen(ver);
    int vetor[n];

    for(i=0; i<n; i++){
        vetor[i] = ver[i]-48;
    }

    int maiorNumero = 0;
    for(i=0; i<n; i++){
        if(vetor[i] > maiorNumero){
            maiorNumero = vetor[i];
        }
    }

    for (linha = maiorNumero; linha > 0; linha--){
        for (coluna=0; coluna < n; coluna++){
            if (vetor[coluna] >= linha){
                printf("*");
            }else{
                printf(" ");
            }
        }
    printf("\n");
    }
    return 0;
}
