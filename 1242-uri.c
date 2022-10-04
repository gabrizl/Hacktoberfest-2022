#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define TAMANHOBUF 300
       
char pilha[TAMANHOBUF]; 
static int top = 0;            

bool vazia() {
  if(top == 0)
    return true;
  else
    return false;
}
   
bool cheia() {
  if(top == TAMANHOBUF)
    return true;
  else
    return false;
}

char verifica(){
  return pilha[top];
}

char pop(){
  int data;
	
  if(!vazia()){
    data = pilha[top];
    top = top - 1;   
    return data;
  }
}

char push(char data){
  if(!cheia()) {
    top = top + 1;   
    pilha[top] = data;
  }
}



bool go (char a, char b){
  if ((a == 'S' && b == 'B') || (a == 'B' && b == 'S')) return true;

  if ((a == 'C' && b == 'F') || (a == 'F' && b == 'C')) return true;

  return false;
}

void achar_max (char* acido){         
  int soma = 0, i;    
  
  for (i=0; i<strlen(acido); i++){            
    if (vazia()){
      push (acido[i]);
    }

    else if(cheia()){
      break;
    }
    else if (go (acido[i], verifica())){
      pop(pilha);
      soma++;
    }
    else {
      push(acido[i]);
    }
  }

  printf("%d\n", soma);
}

int main (){
  char acido[TAMANHOBUF];
  while(scanf("%s", acido) != EOF){         
    top = 0;
    memset(pilha, 0, sizeof pilha); 
    if(strcmp(acido, "\n") != 0){
      achar_max(acido);
    }
  }
  return 0;
}