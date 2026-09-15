#include <iostream>
#include<sstream>
#include <vector>
using namespace std;
void firstoccur(vector<int>&a,int l,int h){
    int k;
    cout<<"Enter element to search its first occurance: ";
    cin>>k;
    int ans=-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]==k)
        {
            ans=mid;
            h=mid-1;
        }
        if (a[mid]<k)
        {
            l=mid+1;
        }
        if(a[mid]>k)
        {
            h=mid-1;
        }
    }
    if (ans==-1)
    {
        cout<<l;
    }
    else{
        cout<<ans;
    }
}
void lastoccur(vector<int>&a,int l,int h){
    int k;
    cout<<"Enter element to search its last occurance: ";
    cin>>k;
    int ans=-1;
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]==k)
        {
            ans=mid;
            l=mid+1;
        }
        if (a[mid]<k)
        {
            l=mid+1;
        }
        if(a[mid]>k)
        {
            h=mid-1;
        }
    }
    cout<<ans;
}
int main()
{
    vector<int> a={1,2,2,3,3,3,3,4,4,5};
    int l=0, h=a.size()-1;char ch;
    cout<<"f for first occurance, l for last"<<endl;
    cin>>ch;
    if (ch=='f')
    {
        firstoccur(a, l, h);
    }
    else if (ch=='l')
    {
        lastoccur(a, l, h);
    }
    return 0;
}