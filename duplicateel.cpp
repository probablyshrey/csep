#include <iostream>
#include <vector>
#include <sstream>
#include <unordered_set>
using namespace std;
int main(){
    string inp;
    cout<<"Enter the elements seperated by space, press ENTER when done: ";
    getline(cin, inp);
    stringstream ss(inp);
    int x;
    vector<int> a;
    while(ss>>x)
    {
        a.push_back(x);
    }
    unordered_set<int> org;
    unordered_set<int> ans;
    for (auto i=0; i<a.size(); i++)
    {
        if (org.find(a[i])!=org.end())
        {
            ans.emplace(a[i]);
        }
        org.emplace(a[i]);
    }
    cout<<endl<<"Repeated elements are: "<<endl;
    for (auto i: ans){
        cout<<i<<" ";
    }

}