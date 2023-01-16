#include <iostream>
using namespace std;
void printArray(int *arr, int size)
{
    int i;
    cout << "Array:";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}

int del(int arr[], int size, int element)
{
    int i;
    int pos;
    for (int i = pos; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }
    size--;
}

int main()
{
    int arr[] = {3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int element;
    cout << "Enter the element to be deleted:" << endl;
    cin >> element;
    cout << "The deleted element is" << del(arr, size, element) << endl;
    return 0;
}