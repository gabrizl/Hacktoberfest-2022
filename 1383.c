#include <stdio.h>
 
int main() {
	int k, i, j, temp, instancia = 0, solucao = 1;
	int matriz[9][9], somaLinha[9], somaColuna[9], somaMatriz[3][3];
	int cont;
 
	scanf("%i", &k);
 
    for(cont = 0; cont < k; cont++) {
		for(i = 0; i < 9; i++) {
			for(j = 0; j < 9; j++) { 
				scanf("%d", &matriz[i][j]);
			}
    	}
 
		for (i = 0; i < 9; i++) {
			somaLinha[i]         = 0;
			somaColuna[i]        = 0;
			somaMatriz[i/3][i%3] = 0;
		}
    
		for (i = 0; i < 9; i++) {
			for (j = 0; j < 9; j++) {
				temp = matriz[i][j] * matriz[i][j];
				somaLinha[i]  += temp;
				somaColuna[j] += temp;
				somaMatriz[i/3][j/3] += temp;
 
				if (i == 8 && somaColuna[j] != 285) { break; }
			} 
 
			if (somaLinha[i] != 285) { break; }
		}
 
		instancia++;
		printf("Instancia %i\n", instancia);
 
		for (i = 0; i < 3; i++) {
			for (j = 0; j < 3; j++) {
				if (somaMatriz[i][j] != 285) {
					solucao = 0;
				}
			}
    	}
 
		if (solucao == 1) {
			printf("SIM\n\n");
		} else {
			printf("NAO\n\n");
		}
 
		solucao = 1;
	}
          
    return 0;
}

