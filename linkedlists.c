#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node* next;
};
void traverse(struct node* ptr){
    while (1)
    {
        printf("%d\n", ptr->data);
        if (ptr->next==NULL)
        {
            break;
        }
        ptr=ptr->next;
    }
}
struct node* createnode(struct node* head)
{
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    new->data=5;
    new->next=head;
    return new;
}
void insertmid(struct node* head, int index){
    if (index==0)
    {
        createnode(head);
    }
    struct node* new;
    struct node* ptr;
    new=(struct node*)malloc(sizeof(struct node));
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    int i=0;
    while(i!=(index-1))
    {
        ptr=ptr->next;
    }
    new->data=3;
    new->next=ptr->next;
    ptr->next=new;
    //return ptr;
}
void insertend(struct node* head){
    struct node* ptr;
    struct node* new;
    new=(struct node*)malloc(sizeof(struct node));
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr=head;
    while(1)
    {
        ptr=ptr->next;
        if (ptr->next==NULL)
        {
            break;
        }
    }
    ptr->next=new;
    new->next=NULL;
    new->data=0;
    //return head;
}
int main()
{
    struct node* head;
    struct node* second;
    head=NULL;
    head->next=NULL;
    head=createnode(head);
    insertmid(head, 1);
    insertend(head);
    traverse(head);
    return 0;
}