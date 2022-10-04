#include <stdio.h>
#include <stdlib.h>
 
struct elementos{
  char valor;
  struct elementos *prox;
};
typedef struct elementos Node;
 
struct pilha{
  int contador;
  struct elementos *topo;
};
typedef struct pilha Pilha;
 
Pilha* cria_pilha(){
  Pilha* pi = (Pilha*)malloc(sizeof(Pilha));
  pi->contador = 0;
  pi->topo = NULL;
  return pi;
}
 
void insere_pilha(Pilha* pi, char valor){
  Node *no=(Node*)malloc(sizeof(Node));
  no->valor = valor;
  no->prox = pi->topo;
  pi->topo = no;
  pi->contador++;
}
 
void remove_pilha(Pilha* pi){
  Node *no;
  no = pi->topo;
  pi->topo = no->prox;
  free(no);
  pi->contador--;
}
 
int main(){
  Pilha *lado_B;
  lado_B = cria_pilha();
  int n=1;
  while (n > 0) {
    char lado_a[27],saida_desejada[27];
    int i=0,k=0;
    char c;
    scanf("%d",&n);
    for (i = 0; i < n; i++){
      scanf(" %c", &c);
      lado_a[i] = c;
    }
    lado_a[n] = '\0';
    for (i = 0; i < n; i++){
      scanf(" %c", &c);
      saida_desejada[i] = c;
    }
    saida_desejada[n] = '\0';
      
    i=0;
    while(k != n){
        if(i < n){
            if(saida_desejada[k] == lado_a[i]){
              insere_pilha(lado_B, lado_a[i]);
              remove_pilha(lado_B);
              printf("IR");
              i++;
              k++;
            }
              
            if((lado_B->topo!=NULL)&&(lado_B->contador!=0)){
              if((saida_desejada[k]!=lado_B->topo->valor)&&(saida_desejada[k]!=lado_a[i])&&(i!=n)){
                printf("I");
                insere_pilha(lado_B, lado_a[i]);
                i++;
              }
            }
            else if(saida_desejada[k]!=lado_a[i]){
              insere_pilha(lado_B, lado_a[i]);
              i++;
              printf("I");
            }
          }
        if((lado_B->topo != NULL)&&(lado_B->contador !=0)){
          if(saida_desejada[k]==lado_B->topo->valor){
            printf("R");
            remove_pilha(lado_B);
            k++;
          }
          else if(i>=n){
            printf(" Impossible");
            while(lado_B->contador != 0){
              remove_pilha(lado_B);
            }
            break;
          }
        }
      }
    printf("\n");
    scanf("%d",&n);
  }
  return 0;
} 