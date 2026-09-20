#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    stack<char> st;
    string open="{[(";
    for (auto i: s)
    {
        if (open.find(i)!=-1)
        {
            st.push(i);
        }
        else{
            if (((i==')')&&(st.top()=='('))||((i=='}')&&(st.top()=='{'))||((i==']')&&(st.top()=='[')))
            {
                st.pop();
            }
        }
    }
    if (st.empty())
    {
        cout<<"Valid.";
        return 0;
    }
    cout<<"Invalid.";
}