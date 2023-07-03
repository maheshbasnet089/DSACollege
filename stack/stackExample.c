#include <stdio.h>
#define MAX 100
#define TRUE 1 
#define FALSE 0 
#include <string.h>
struct Stack
{
       char items[MAX];
       int tos;
}
    void push(struct stack *sp,char c)
    {
         sp->tos++;
         sp->items[sp->tos]=c;
         
    }
    char pop(struct stack *sp)
    {
        return sp->items[sp->tos--]; 
    }
int main()
{
    char exp[MAX]; // getting the character from the user
    struct Stack s;  // defining stack
    s.tos = -1; // empty stack
    clrscr();
    prinft("Enter your expression");
    gets(exp); // inserting the given expresssion to the exp variable
    for(i = 0;i<strlen(exp);i++){
          ch = exp[i];
          if(ch == "[" || ch == "{" || ch == "("){ // check if exp is opener
          
                
                
                }
          
          
          }
     
    
 getch();
    
    
}
