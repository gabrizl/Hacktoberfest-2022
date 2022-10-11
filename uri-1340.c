#include <stdio.h>
#include <stdlib.h>

typedef struct ed{
  struct e *ip;
  struct e *in;

  int topo;
  int *p;
}ed;

typedef struct e{
  int n;
  struct e *prox;
}e;

ed *alocarestrutura();
void insert(ed *edx, int n);
void delete(ed *edx, int n);

int pilha, fila, filap;

int main(){
  ed *edx;
  int x, i, op, n;

  while(scanf("%d", &x) == 1){
    pilha=1;
    fila=1;
    filap=1;

    edx = alocarestrutura();

    for(i=0; i<x; i++){
      scanf("%d %d", &op, &n);

      if(op == 1) insert(edx, n);
      else delete(edx, n);
    }

    if((pilha == 1 && filap == 1) || (filap == 1 && fila == 1) || (pilha == 1 && fila == 1)) printf("not sure\n");
    else if(filap) printf("priority queue\n");
    else if(fila) printf("queue\n");
    else if(pilha) printf("stack\n");
    else printf("impossible\n");

    free(edx);
  }


  return 0;
}

ed *alocarestrutura(){
    ed *aux;

    aux = (ed*)malloc(sizeof(ed));
    aux->ip = NULL;
    aux->in = NULL;
    aux->topo = 0;
    aux->p = NULL;

    return aux;
}


void insert(ed *edx, int n){
  e *ep, *en, *aux, *ant;
  int first=1;

  if(filap == 1){
    ep = (e*)malloc(sizeof(e));
    ep->n = n;
    ep->prox = NULL;

    if(edx->ip == NULL) edx->ip = ep;
    else {
      aux = edx->ip;

      while(aux != NULL){
        if(ep->n > aux->n) break;

        first=0;
        ant = aux;
        aux = aux->prox;
      }

      if(first == 1){
        ant = edx->ip;
        edx->ip = ep;
        ep->prox = ant;
      } else {
        ant->prox = ep;
        ep->prox = aux;
      }
    }
  }

  if(fila == 1){
    en = (e*)malloc(sizeof(e));
    en->n = n;
    en->prox = NULL;

    if(edx->in == NULL) edx->in = en;
    else {
      aux = edx->in;

      while(aux->prox != NULL) aux =  aux->prox;

      aux->prox = en;
    }
  }

  if(pilha == 1){
    if(edx->topo == 0) edx->p = (int*)malloc(sizeof(int));
    else edx->p = (int*)realloc(edx->p ,sizeof(int)*(edx->topo+1));

    edx->p[edx->topo] = n;
    edx->topo++;
  }
}

void delete(ed *edx, int n){
  e *aux;

  if(edx->p != NULL && pilha != 0){
    if(edx->p[edx->topo-1] == n){
      edx->p = (int*)realloc(edx->p, sizeof(int)*(edx->topo-1));
      edx->topo--;
    } else pilha = 0;
  }

  if(edx->ip != NULL && filap != 0){
    aux = edx->ip;

    if(aux->n == n){
      aux = aux->prox;
      free(edx->ip);
      edx->ip = aux;
    } else filap = 0;
  }

  if(edx->in != NULL && fila != 0){
    aux = edx->in;
    if(aux->n == n){
      aux = aux->prox;
      free(edx->in);
      edx->in = aux;
    } else fila = 0;
  }
}
