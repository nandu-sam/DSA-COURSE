// BUBBLE SORT SWAPPING THE ADJACENT ELEMENTS
// THE ARRAY WILL BE NOT SORTED INITIALLY
// AFTER SORTING THE ARRAY WILLBE ASCENDING ORDER ARRAY
// Time Complexity: O(N2) for the worst and average cases and O(N) for the best case AND THIS IS WHEN THE ARRAY IS ALREADY SORTED AND NO SWAPPING HAPPEND IN THE ARRAY . Here, N = size of the array.
// Space Complexity: O(1)

#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void bubble_sort(int arr[], int n)
{
    // bubble sort
    for (int i = n - 1; i >= 0; i--)
    {
        // int didSwap = 0; // This variable is to check for whether the array elements swapped or not
        for (int j = 0; j <= i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                // int temp = arr[j + 1];
                // arr[j + 1] = arr[j];
                // arr[j] = temp;

                // didSwap = 1; // if the elements are swapped then return 1
                for (int i = 0; i < n; i++)
                {
                    cout << arr[i] << " ";
                }
            }
        }
        // checking if the array was already sortred where it tells the time complexity as linear time complexity and it is also knoiwn as big oh(n)
        /*if (didSwap == 0)
        { // if the array was sorted and no swapping happend then break out of the loop
            break;
        }*/
    }

    /*cout << "After Using bubble sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";*/
}

int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*cout << "Before Using Bubble Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/

    bubble_sort(arr, n);
    return 0;
}