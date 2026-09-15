#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &a)
{
    int temp=a[6];
    for (int i=a.size()-1; i>0; i--)
    {
        a[i]=a[i-1];
    }
    a[0]=temp;
}
void printarr(vector<int> &a)
{
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> a={1,2,3,4,5,6,7};
    int count=1;
    cout<<endl<<"CURRENT ARRAY"<<endl;
    printarr(a);
    cout<<"enter the number of rotations: ";
    int k;
    cin>>k;
    k=k%a.size();
    while(count<=k)
    {
        rotate(a);
        count++;
    }
    cout<<endl;
    cout<<"ROTATED ARRAY"<<endl;
    printarr(a);
    return 0;
}