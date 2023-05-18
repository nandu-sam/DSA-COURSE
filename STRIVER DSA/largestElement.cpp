#include <iostream>
using namespace std;

int largestElement(int arr[], int n)
{
    int maxElement = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxElement)
        {
            maxElement = arr[i];
        }
    }
    return maxElement;
}
int main()
{
    int arr[] = {2, 5, 7, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "The Largest element of the array is:" << largestElement(arr, n);
    return 0;

}