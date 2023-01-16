#include <iostream>
using namespace std;

void print(int arr[], int size)
{
    cout << "The size of the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " "<<endl;
    }
   // cout << endl;
}
bool isSorted(int *arr, int size)
{
    print(arr, size);

    if (size == 0 || size == 1)
    {
        return true;
    }
    if (arr[0] > arr[1])
        return false;
    else
    {
        bool remainingPart = isSorted(arr + 1, size - 1);
        return remainingPart;
    }
}
int main()
{

    int arr[5] = {2, 3, 4, 5,6};
    int size = 5;

    int ans = isSorted(arr, size);

    if (ans)
    {
        cout << "Array is sorted:" << endl;
    }
    else
    {
        cout << "Array is not sorted:" << endl;
    }
    return 0;
}