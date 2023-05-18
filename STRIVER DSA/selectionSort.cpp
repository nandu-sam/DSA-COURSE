// SELECTION SORT PERFORMS SELECT MINIMUM AND SWAP
// ARRAY WILL NOT BE IN A SORTED ORDER
// TIME COMPLEXITY OF THE SELECTION SORT  O(N2), (where N = size of the array), for the best, worst, and average cases.
// Space Complexity: O(1)
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n)
{
    // selection sort
    for (int i = 0; i < n - 1; i++)
    {
        int mini = i;                   // for storing mininmum index value
        for (int j = i + 1; j < n; j++) // inner loop
        {
            if (arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        swap(arr[mini], arr[i]);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << "The elements here are before sorted:"
             << "\n";
    }
}
/*cout << "After selection sort: "
     << "\n";
for (int i = 0; i < n; i++)
{
    cout << arr[i] << " ";
}
cout << "\n";
}*/
int main()
{
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "Before selection sort: "
         << "\n";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
    selection_sort(arr, n);
    return 0;
}