#include <iostream>
#include <vector>
#include <sstream>
using namespace std;
int main() {
    string line;
    getline(cin, line);
    stringstream ss(line);
    int x;
    vector<int> a;
    while(ss>>x)
    {
        a.push_back(x);
    }
    cout<<"array elements are: "<<endl;
    for (auto i: a)
    {
        cout<<i<<" ";
    }
    return 0;
}