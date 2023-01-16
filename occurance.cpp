#include <bits/stdc++.h>
using namespace std;

/* if x is present in arr[] then returns the index of
   FIRST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
    void print(int arr[], int high, int low) {

    for(int i=high; i<=low; i++) {
        cout << arr[i] << " ";
    } cout << endl;
}
int first(int arr[], int low, int high, int x, int n)
{
    print(arr,high,low);
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if ((mid == 0 || x > arr[mid - 1]) && arr[mid] == x)
            return mid;
        else if (x > arr[mid])
            return first(arr, (mid + 1), high, x, n);
        else
            return first(arr, low, (mid - 1), x, n);
    }
    return -1;
}

/* if x is present in arr[] then returns the index of
   LAST occurrence of x in arr[0..n-1], otherwise
   returns -1 */
int last(int arr[], int low, int high, int x, int n)
{
     print(arr,high,low);
    if (high >= low)
    {
        int mid = low + (high - low) / 2;
        if ((mid == n - 1 || x < arr[mid + 1]) && arr[mid] == x)
            return mid;
        else if (x < arr[mid])
            return last(arr, low, (mid - 1), x, n);
        else
            return last(arr, (mid + 1), high, x, n);
    }
    return -1;
}

// Driver program
int main()
{
    int arr[] = {1, 2, 3, 4, 4, 5, 6, 7, 8, 9};
    int n = sizeof(arr) / sizeof(int);

    int x = 4;

    cout<<"first Occurrence:"<<first(arr, 0, n - 1, x, n)<<endl;
    cout<<"Last Occurrence:"<<last(arr, 0, n - 1, x, n)<<endl;

    return 0;
}