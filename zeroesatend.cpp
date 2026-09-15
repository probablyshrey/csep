#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
void swap(int* a, int* b)
{
    int temp;
    temp=*b;
    *b=*a;
    *a=temp;
}
int main(){
    string line;
    cout<<"enter array elements seperated by space, press ENTER when done: ";
    getline(cin, line);
    stringstream ss(line);
    int x;
    vector<int> a;
    while(ss>>x)
    {
        a.push_back(x);
    }
    cout<<"Array with shifted zeroes is: "<<endl;
    int low=0;
    for (int high=0; high< a.size(); high++)
    {
        if (a[high]!=0)
        {
            swap(&a[low], &a[high]);
            low++;
        }
    }
    for (int i: a)
    {
        cout<<i<<" ";
    }
    return 0;
}