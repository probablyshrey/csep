#include <bits/stdc++.h>
using namespace std;
vector<int> fre(vector<int>& a, int m)
{
    vector<int> cnt(m+1, 0);
    for (auto i: a)
    {
        cnt[i]++;
    }
    for (int i=1; i<=m; i++)
    {
        cnt[i]+=cnt[i-1];
    }
    return cnt;
}
vector<int> out(vector<int>& cnt, vector<int>& a)
{
    int n=a.size();
    vector<int> ans(n ,0);
    for (int i=n; i>=0; i--)
    {
        ans[cnt[a[i]]-1]=a[i];
        cnt[a[i]]--;
    }
    return ans;
}
int main(){
    vector<int> a; int n; int m=INT_MIN; int el;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements: ";
    for (int i=0; i<n; i++)
    {
        cin>>el;
        a.push_back(el);
        m=max(m, el);
    }
    vector<int> cnt=fre(a, m);
    for (auto i: cnt)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    vector<int> ans=out(cnt, a);
    for (auto i: ans)
    {
        cout<<i<<" ";
    }
}