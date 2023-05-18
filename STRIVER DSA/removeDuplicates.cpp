#include <bits/stdc++.h>

using namespace std;
int removeDuplicates(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[i] != arr[j])
        {
            i++;
            arr[i] = arr[j];
            cout << arr[i] << " ";
        }
    }
    return i + 1;
}
int main()
{
    int arr[] = {5, 10, 10, 15, 20, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = removeDuplicates(arr, n);
    cout << "The array after removing duplicate elements is " << endl;
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
}