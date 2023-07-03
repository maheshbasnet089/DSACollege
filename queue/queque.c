#include <stdio.h>
#include <stdlib.h>  // Include <stdlib.h> for the exit() function

#define MAX 10

struct queue {
    int items[MAX];
    int front;
    int rear;
};

void insert(struct queue *q, int val) {
    if (q->rear == MAX - 1) {  // Use '==' for comparison, not '='
        printf("Queue is full, cannot insert more items.\n");
        return;
    }

    q->rear++;
    q->items[q->rear] = val;
    printf("Inserted successfully.\n");
}

int removes(struct queue *q) {  // Renamed the function from 'removes' to 'remove'
    int val;
    // Check if empty or not
    if (q->rear == -1) {
        printf("The queue is empty.\n");
        exit(0);  // Exit the program if the queue is empty
    }
    val = q->items[q->front];
    q->front++;
    printf("Item removed.\n");
    return val;
}

void display(struct queue *q) {
    int i;
    if (q->rear == -1) {
        printf("The queue is empty.\n");
        return;
    }
    printf("Queue contains: ");
    for (i = q->front; i <= q->rear; i++) {
        printf("%d\t", q->items[i]);
    }
    printf("\n");
}

int main() {
    struct queue q;
    q.front = 0;
    q.rear = -1;  // Empty queue initialization
    printf("Inside main function.\n");
    display(&q);
    insert(&q, 10);
    insert(&q, 20);
    insert(&q, 30);
    display(&q);
    removes(&q);
    display(&q);
    system("pause"); 
    return 0;
}
