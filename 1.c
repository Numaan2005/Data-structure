#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX],top =-1; // if top = -1  stack is empty
     int isfull() {
return top == MAX -1 ? 1:  0;
     }
     int isEmpty(){
return top == -1 ? 1: 0;
     }
     void push() {
          
if(isfull()) 
printf("stack overflow");
else {
     int value;
     printf("enter value");
     scanf("%d",&value);
     top++;
     stack[top] = value;
     printf("element added");
}
     }
     int pop() {
          if(isEmpty()) {
          printf("stack underflow !!!\n");
      return INT_MIN;
       }
      else {
  int value = stack[top];
  top--;
  return value;
      }
  }
  int peek() {
     if(isEmpty()) {
     printf("stack is empty!!!\n");
 return INT_MIN;
  }
 else {

return stack[top];
 }
}

void show() {

     if(isEmpty())
     printf(" stack is empty !!!!\n");
else {
     for(int i = top ; i>=0; i--) {
printf("%d\n",stack[i]);
}
}
}
        int main() {

          while(1) {
printf("1, push\n");
printf("2.pop\n");
printf("3.peek\n");
printf("4. show\n");
printf("5.exit\n");
int choice,value;
printf("Enter choice");
scanf("%d",&choice);
switch (choice) {
     case 1 :
     push ();
     break;
     case 2:
     value = pop();
     if(value != INT_MIN)
     printf("%d pop from stack !!!\n",value);
     break;
    case 3 :
    value =peek();
    if (value!= INT_MIN)
    printf("top element is %d\n",value);
break;
case 4:
show();
break;
case 5:
exit(0);
break;
printf(" invalid choice\n");
}
printf("\n");
system("pause");
          }


          return 0;
        }







    