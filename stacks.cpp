#include<iostream>
using namespace std;
#include<vector>
int top=-1;
struct node{
    int data;
    node* next;
    public:
    node(int n)
    {
        data=n;
        next=nullptr;
    }
    node(int n, node* ptr)
    {
        data=n;
        next=ptr;
    }
};
int push(node* head)
{
    int n;
    cout<<"Enter the data: ";
    cin>>n;
    if (head==nullptr)
    {
        return new node(n);
    }
    return new
}
int main(){
    node* head=nullptr;
    do{
        cout<<"Stack Operations: "<<endl;
        cout<<"1.Push "<<endl;
        cout<<"2.Pop "<<endl;
        cout<<"3.Peek "<<endl;
        cout<<"4.Display "<<endl;
        cout<<"5.Exit"<<endl;
        cout<<"Enter your choice"<<endl;
    }while(1)
}