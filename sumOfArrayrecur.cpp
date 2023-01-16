#include <iostream>
using namespace std;

int getSum(int *arr, int size)
{
    // Base Condition
    if (size == 0)
    {
        return 0;
    }
    if (size == 1)
    {
        return arr[0];
    }
    // processing part
    int remainingPart = getSum(arr + 1, size - 1);
    // Recursive call
    int sum = arr[0] + remainingPart;
    return sum;
}
int main()
{
    int arr[5] = {2, 5, 6, 7, 8};
    int size = 5;
    int sum = getSum(arr, size);
    cout << "The sum of the array: " << sum << endl;
    return 0;
}
