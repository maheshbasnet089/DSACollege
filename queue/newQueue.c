#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#define MAX 10
struct queue{
       
       int item[MAX];
       int rear;
};

// enqueue = insert
void enqueue(struct queue *q,int val){
     // checking if overflowed or not
 if(q->rear == MAX-1){
 printf("Queue is overflow/full");
 return;          
}    
// increment rear position and insert in that position
q->rear++;
q->item[q->rear] = val;
printf("Item inserted succesfully");
return;
     
}
int dequeue(struct queue*q){
    int val,i;
 // check if empty or not queue
 if(q->rear == -1){
 printf("The queue is empty, cannot be removed");
 exit(0); // normally cannot terminate to exiting force          
}
 
 // change the current rear position to rear-1
 val = q->item[0];
for (i = 1; i <= q->rear; i++) {
        q->item[i - 1] = q->item[i]; // shifting the position
    }
    q->rear--;
    return val; 
}

void display(struct queue q){
 int i;
 if(q.rear == -1)
           printf("Queue is emtpy");
 else{
      printf("\nQueue contains:\n");
      for(i=0;i<=q.rear;i++){
                             printf("%d\t",q.item[i]);
                             }
      }    
}

void main(){
     
     struct queue q;
     char ch;
     int n;
     system("CLS"); 
     q.rear = -1; // empty queue
     while(1){
              system("CLS");
              printf("Select an option \n 1.enqueue\n 2.dequeue\n 3.display\n4.Exit");
              ch=getche();
              switch(ch){
                         case '1':
                              printf("Enter a number:");
                              scanf("%d",&n);
                              enqueue(&q,n);
                              break;
                         case '2':
                         if(q.rear == -1){
                                   printf("Queue is empty");
                                   }
                         else{
                         n = dequeue(&q);
                         printf("\n%d was removed",n);
                         }
                         break;
                         case '3':
                         display(q);
                         break;
                         case '4':
                              return;
                  
                         }
                         getche();
              
              }
     
     }









