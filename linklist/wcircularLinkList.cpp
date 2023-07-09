#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 50

struct student{
 int roll;
 char name[MAX];
 int age;      
}
struct node{
 struct student std;
 struct node*next;      
}


struct node*header = NULL;
struct node* getnode(struct student s)
{
 struct node*ptrnew = (struct node*)malloc(sizeof(struct node));
 if(ptrnew == NULL)
 {
  prinft("\nMemory allocation failed."); 
  getch();
  exit(0);        
 }
}
