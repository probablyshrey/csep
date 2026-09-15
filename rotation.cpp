#include<iostream>
#include<vector>
using namespace std;
void printarr(vector<int> &a)
{
    for (int i:a)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}
void rev(vector<int> &a, int low, int high)
{
    while(low<=high)
    {
        int temp=a[high];
        a[high]=a[low];
        a[low]=temp;
        low++;
        high--;
    }
}
int main(){
    vector<int> a={1,2,3,4,5,6,7};
    int count=1;
    cout<<endl<<"CURRENT ARRAY"<<endl;
    printarr(a);
    cout<<"enter the number of rotations: ";
    int k;
    cin>>k;
    rev(a, 0, a.size()-1);
    k=k%a.size();
    rev(a,0,k-1);
    rev(a, k, a.size()-1);
    cout<<endl;
    cout<<"ROTATED ARRAY"<<endl;
    printarr(a);
    return 0;
}