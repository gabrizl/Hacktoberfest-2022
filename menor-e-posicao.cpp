#include <iostream>
 
using namespace std;
 
int main() {
 int N,i,menor,posicao;

scanf("%d",&N);

int X[N];

scanf("%d",&X[0]);
menor = X[0];
posicao= 0;

for (i=1;i<N;i++){
scanf("%d",&X[i]);

if (X[i] < menor){

	menor= X[i];
	posicao=i;
	
}	
	
}
printf("Menor valor: %d\n",menor);
printf("Posicao: %d\n",posicao);
    return 0;
}
