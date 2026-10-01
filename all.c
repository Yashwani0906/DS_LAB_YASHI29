//Linklist_Single Link List
//1.Making one node
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*link;
};
int main(){
    struct node*head= NULL;
    head = (struct node*)malloc(sizeof(struct node));
    
        head->data=80;
        head->link=NULL;
        printf("%d",head->data);
        return 0;
}
//2.Making multiple nodes
#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*next;
};
int main(){
    struct node*head = NULL;
    struct node*second = NULL;
    struct node*third = NULL;
    head = (struct node*)malloc(sizeof(struct node));
    second = (struct node*)malloc(sizeof(struct node));
    third = (struct node*)malloc(sizeof(struct node));
    head->data=10;
    head->next=second;
    
    second->data=20;
    second->next=third;
    
    third->data=30;
    third->next=NULL;
    printf("%d ",head->data);
    printf("%d ",second->data);

    printf("%d ",third->data);

    return 0;
}
