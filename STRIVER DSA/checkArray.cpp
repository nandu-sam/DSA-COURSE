#include <iostream>
using namespace std;
bool checkArray(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > arr[i - 1])
        {
            return true;
        }
        return false;
    }
}

int main()
{
    int arr[] = {30, 25, 20, 15, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The result is :" << checkArray(arr, n);
    return 0;
}