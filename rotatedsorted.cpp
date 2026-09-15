#include<iostream>
#include<vector>
using namespace std;
int binf(vector<int>&a,int l, int h, int k)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]==k)
        {
            return mid;
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
}
int bins(vector<int>&a,int l,int h, int k)
{
    int mid;
    while(l<=h)
    {
        mid=(l+h)/2;
        if (a[mid]==k)
        {
            return mid;
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
}
int main()
{
    vector<int> a={3,4,5,6,7,1,2};
    int shift=0; int sz;int ans;int k;
    cout<<"Enter element";
    cin>>k;
    for (int i=0; i<a.size()-1; i++)
    {
        if (a[i+1]<a[i])
        {
            shift++;
            sz=a.size()-i-1;
        }
    }
    if(shift<=1)
    {
        ans=binf(a, sz, a.size()-1, k);
        if (ans==-1)
        {
            bins(a, sz-1, 0, k);
        }
        cout<<ans;
    }
    else{
        cout<<"Array is not rotated sorted";
    }
}