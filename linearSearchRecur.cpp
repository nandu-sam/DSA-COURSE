#include <iostream>
using namespace std;
void print(int arr[], int size)
{
    cout << "Size of the array is: " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
bool linearSearch(int *arr, int size, int k)
{
    print(arr,size);
    if (size == 0)
    {
        return false;
    }
    if (arr[0] == k)
    {
        return true;
    }
    else
    {
        bool remainingPart = linearSearch(arr + 1, size - 1, k);
        return remainingPart;
    }
}
int main()
{
    int arr[5] = {2, 4, 6, 8, 9};
    int size = 5;
    int key = 9;

    int ans = linearSearch(arr, size, key);
    if (ans)
    {
        cout << "Key found: " << endl;
    }
    else
    {
        cout << "Key not found: " << endl;
    }
    return 0;
}