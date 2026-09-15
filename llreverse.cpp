#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    node* next;
};
node* reverse(node* head)
{
    node* curr=head;
    node* prev=NULL; node* next=NULL;
    while(1)
    {
        if(curr==NULL)
        {
            break;
        }
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    while(prev!=NULL)
    {
        cout<<prev->data<<"-->";
        prev=prev->next;
    }
    cout<<"NULL"<<endl;
    return prev;
}
int main(){
    node* head=(node*)malloc(sizeof(node));
    node* first=(node*)malloc(sizeof(node));
    node* second=(node*)malloc(sizeof(node));
    node* third=(node*)malloc(sizeof(node));
    head->data=10;
    head->next=first;
    first->data=20;
    first->next=second;
    second->data=30;
    second->next=third;
    third->data=40;
    third->next=NULL;
    head=reverse(head);
}