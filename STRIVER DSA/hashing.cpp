#include <bits/stdc++.h>
using namespace std;
// CREATING ARRAY
int main()
{
    int n;
    cout << "Enter the array size:" << endl;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the elements:" << endl;
        cin >> arr[i];
    }

    // PRECOMPUTE hash array

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }
    // TAKING QUERIES
    int q;
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter the number for which you need an output:" << endl;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}