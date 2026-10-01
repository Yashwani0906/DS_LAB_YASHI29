//Implementing stack by array.
#include <stdio.h>
#define max 5
int stack[max];
int top=-1;
//PUSH operation
void push(int value){
    if(top == max-1){
        printf("Stack overflow\n");
    }
    else{
        top++;
        stack[top]=value;
        printf("%d pushed into stack\n",value);
    }
}
//pop operation
void pop(){
    if(top == -1){
        printf("Stack underflow\n");
    }
    else{
        printf("%d popped from stack\n", stack[top]);
        top--;
    }
}
//peek operation
void peek(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Top element = %d\n",stack[top]);
    }
}
//display operation
void display(){
    if(top==-1){
        printf("Stack is empty\n");
    }
    else{
        printf("Stack elements: ");
        for(int i = top;i>=0;i--){
            printf("%d ",stack[i]);
        }
        printf("\n");
    }
}
int main(){
    push(10);
    push(40);
    push(60);
    push(80);
    display();
    peek();
    pop();
    display();
    return 0;
}
















