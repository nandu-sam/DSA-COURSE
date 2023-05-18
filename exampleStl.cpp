#include <bits/stdc++.h>
using namespace std;

void printVec(vector<int> &v)
{
    for (int i = 0; i < v.size(); ++i)
    {
        // v.size() -> o(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // int a[10];
    vector<int> v; // can change size of the array//
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // o(1)
    }
    printVec(v);
}