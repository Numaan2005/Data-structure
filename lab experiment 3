#include<stdio.h>
#include<string.h>

int checkbalance(char*str) {
    int len = strlen(str),top =-1;
    char stack[len];
    for(int i =0; i<len; i++) {
        char ch = str[i];
        if(ch =='(' || ch =='{' || ch== '[')
            stack[++top] = ch;
        else {
            if(top ==-1)
            return 0;
            else if(ch==')' &&stack[top] != '(')
            return 0;
            else if(ch=='}'&&stack[top] != '{')
            return 0;
            else if(ch==']'&&stack[top] != '[')
            return 0;
            else
            top--;
        }
    }

if(top ==-1)
return 1;
else
return 0;
    }

int main() {
char str[100];
gets(str);
int result = checkbalance(str);
if(result == 1) 
printf("balanced!!!\n");

else
printf("not balanced\n");
return 0;
}






















    
