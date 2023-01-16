#include <iostream>
using namespace std;
int getLargest(int arr[], int n)
{
    int i;
    int res = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > res)
            res = arr[i];
    return res;
}
int main()
{
    int arr[] = {2, 4, 5, 7, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The largest element is:" <<getLargest(arr, n);
    return 0;
}