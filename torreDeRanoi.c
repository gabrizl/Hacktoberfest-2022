#include <stdio.h>
#include <math.h>

int array[51];
int total, N;

void calcula(int v, int p){
  int i;
  if(p == N) return;
  
  if(array[p] == 0){
    array[p] = v;
    total++;
    return calcula(v+1, p);
  }
  for(i = 0; i <= p; i++){
    int raiz = (int) sqrt(array[i] + v);
    if(pow(raiz,2) == array[i] + v){    
      array[i] = v;
      total++;
      return calcula(v+1, p);
    }
  }
  calcula(v, p + 1);
}
 
int main() {
  int i, j;
    int testes;
  scanf("%d", &testes);
  for (i = 0; i < testes; i++){
      scanf("%d", &N);
      for(j = 0; j < 50; j++)
        array[j]= 0;
      total = 0;
      calcula(1, 0);
      printf("%d\n", total);
  }
  return 0;
}
