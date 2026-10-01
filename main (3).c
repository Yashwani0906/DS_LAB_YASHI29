

//Implementing stack by linked list
#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node*next;
};
struct Node*top=NULL;
//Push operation
void push(int value){
    struct Node*new;
    new=(struct Node*)malloc(sizeof(struct Node));
    if(new==NULL){
        printf("STACK OVERFLOW\n");
            return;
    }
    new->data=value;
    new->next=top;
    top=new;
    printf("%d pushed into stack\n",value);
}
//pop operation
void pop(){
    struct Node*temp;
    if(top==NULL){
        printf("Stack Underflow\n");
        return;
    }
    temp=top;
    printf("%d popped from stack\n",top->data);
    top=top->next;
    free(temp);
    
}

//peek operation
void peek(){
    if(top==NULL){
            printf("Stack is empty\n");
            return;
                }
    else{
        printf("Element at the top = %d\n",top->data);
    }
}
//Display operation
void display(){
    struct Node*temp = top;
    if(top==NULL){
        printf("Stack is empty\n");
        return;
        
    }
    printf("Stack elements: ");
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;
        }
    printf("\n");
}
int main(){
    push(10);
    push(20);
    push(30);
    pop();
    peek();
    display();
}
















