#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int>& arr, int low, int mid, int high)
{
    vector<int> ans, a, b;

    for (int i = low; i <= mid; i++){
        a.push_back(arr[i]);
    }

    for (int i = mid + 1; i <= high; i++){
        b.push_back(arr[i]);
    }

    int l1 = 0;
    int l2 = 0;

    while ((l1 < a.size()) || (l2 < b.size()))
    {
        if (l1 >= a.size())
        {
            for (int i = l2; i < b.size(); i++){
                ans.push_back(b[i]);       // changed l2 -> i
            }
            return ans;
        }

        if (l2 >= b.size())
        {
            for (int i = l1; i < a.size(); i++){
                ans.push_back(a[i]);       // changed l1 -> i
            }
            return ans;
        }

        if (a[l1] < b[l2]){
            ans.push_back(a[l1++]);
        }
        else if (a[l1] > b[l2])
        {
            ans.push_back(b[l2++]);
        }
        else if (a[l1] == b[l2]){
            ans.push_back(a[l1++]);
            ans.push_back(b[l2++]);
        }
    }

    return ans;
}

void mergesort(vector<int>& a, int low, int high)
{
    if (low >= high) return;

    int mid = low + (high - low) / 2;

    mergesort(a, low, mid);
    mergesort(a, mid + 1, high);

    vector<int> c = merge(a, low, mid, high);

    // Copy the sorted elements back into a
    for (int i = low; i <= high; i++)
    {
        a[i] = c[i - low];
    }
}

int main(){
    vector<int> a = {4,3,5,6,1,3,78,3,12,34,47,12};

    int n = a.size();

    mergesort(a, 0, n-1);

    for (auto i : a)
    {
        cout << i << " ";
    }
}