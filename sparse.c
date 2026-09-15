#include <stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
    struct node* prev;
};
struct node* new(struct node* ptr)
{
    struct node* new;
    new= (struct node*)malloc(sizeof(struct node));
    int data;
    printf("enter data: ");
    scanf("%d", &data);
    new->data=data;
    new->next=ptr;
    new->prev=NULL;
    ptr->prev=new;
    return new;
}
struct node* display(struct node* ptr)
{
    printf("LINKED LIST DISPLAY: ");
    struct node* h=ptr;
    while(ptr->next!=NULL)
    {
        printf("%d<-->", ptr->data);
        ptr=ptr->next;
    }
    printf("NULL\n");
    return h;
}
int main(){
    struct node* head;
    head=NULL;
    int ch;
    do{
        printf("1.INSERT\n");
        printf("2.DISPLAY\n");
        printf("Enter the choice: ");
        scanf("%d", &ch);
        switch(ch){
            case 1:
            head=new(head);
            break;
            case 2:
            head=display(head);
            case 4:
            break;
            default:
            printf("hi");
        }
    }while(ch!=4);
}