#include<iostream>
#include <stack>
using namespace std;
void elements(int *a)
{
    cout<<"Enter the elements: "<<endl;
    for (int i=0; i<5; i++)
    {
        cin>>a[i];
    }
}
void printarr(int* a)
{
    cout<<"Current array:"<<endl;
    cout<<'[';
    for (int i=0; i<5; i++)
    {
        cout<<a[i]<<",";
    }
    cout<<']'<<endl;
}
int main(){
    int arr[5];
    elements(arr);
    printarr(arr);
    stack<int> st;
    int b[5];
    for (int i=4; i>=0; i--)
    {
        if (st.empty())
        {
            st.push(arr[i]);
            b[i]=-1;
        }
        else if (arr[i]==st.top())
        {
            b[i]=-1;
        }
        else{
            if (arr[i]<st.top())
            {
                b[i]=st.top();
                st.push(arr[i]);
            }
            else
            {
                while(!st.empty()&&(st.top()<arr[i]))
                {
                    st.pop();
                }
                if(st.empty())
                {
                    b[i]=-1;
                    st.push(arr[i]);
                }
                else{
                    b[i]=st.top();
                    st.push(arr[i]);
                }
            }
        }
    }
    printarr(b);
    return 0;
}