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
    return INT-MIN;
     }
    else {
int value = stack[top];
top--;
return value;
    }
}