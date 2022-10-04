#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#define BUFSIZ 300
       
char stack[BUFSIZ]; 
static int top = 0;            

bool isempty() {

   if(top == 0)
      return true;
   else
      return false;
}
   
bool isfull() {

   if(top == BUFSIZ)
      return true;
   else
      return false;
}

char peek() {
   return stack[top];
}

char pop() {
   int data;
    
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
     
   }
}

char push(char data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
     
   }
}



bool go (char a, char b){
    if ((a == 'S' && b == 'B') || (a == 'B' && b == 'S')) return true;

    if ((a == 'C' && b == 'F') || (a == 'F' && b == 'C')) return true;

    return false;
}

void find_max (char* acido){       
      
    int sum = 0, i;    
    
    for (i=0; i<strlen(acido); i++){            
        
        if (isempty()){
            push (acido[i]);
        }

        else if(isfull()){
           break;
        }
        else if (go (acido[i], peek())){
         
            pop(stack);
            sum++;

        }
        else {
            push (acido[i]);
        }
    }

    printf("%d\n", sum);
    
}
int main (){

    char acido[BUFSIZ];
    while(scanf("%s", acido) != EOF){         
      top = 0;
      memset(stack, 0, sizeof stack); 
      if(strcmp(acido, "\n") != 0){
         find_max(acido);
      }        
        
    }

    return 0;
}
