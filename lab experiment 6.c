#include<stdio.h>
#include<stdlib.h>
#define SIZE 100
int queue[SIZE] ,front =-1, rear =-1;
int isEmpty() {
return(front ==-1) ? 1:0;
}
int isfull() {
    return(front =SIZE-1)? 1:0;
}
void enqueue(int data) {
    queue[++rear] = data;
    if(front ==-1)
    front  = rear ;
    printf("Element inserted !!!\n");

}
int dequeue() {
    int data = queue[front];
if(front == rear)
front = rear = -1;
else front ++;
return data;
}
int peek() {
    return queue[front];

}
int display() {
("Queue Element are \n");
for(int i = front; i<rear ; i++) {
    printf("%d",queue[i]);
}
}
int main() {

    while(1) {
        printf("1.Enqueue\n");
        printf("2.Dequeue\n");
        printf("3.peek\n");
        printf("4.Display\n");
        printf("5.Exit\n");
        int choice,data;
        printf("enter choice");
        scanf("%d",&choice);
        switch(choice) {
            case 1:
            if(isfull())
            printf("Quque Overflow !!!\n");
            else {    
                printf("enter element :");
                scanf("%d",&data);

            }

            break;
            case 2:
            if(isEmpty())
            printf(" Queue underflow");
            else
            printf("%d is dequue \n",dequeue());
            break;
            case 3:
            if (isEmpty())
            printf("Queue is empty!!!\n");
            else 
            printf("element availabe in front of queue is %d\n",peek());
            break;
            case 4:
            if(isEmpty())
          printf("Queue is empty !!!\n");
             else
          display();
            break;
            case 5:
            exit(0);
            break;
          default :
          printf("Invalid choice !!!\n");
        }
        printf("\n");
    }
    return 0;
}
