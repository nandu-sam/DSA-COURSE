#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

void insertion_sort(int arr[], int n)
{
    for (int i = 0; i <= n - 1; i++)
    {
        int j = i;
        // printArray(arr, n);
        while (j > 0 && arr[j - 1] > arr[j])
        {
            // printArray(arr, n);
            // int temp = arr[j - 1];
            // arr[j - 1] = arr[j];
            // arr[j] = temp;
            // cout << "Elements before swapped:"
            // << "\n";
            cout << "These are the elements before swappeed:"
                 << "\n";
            printArray(arr, n);
            cout << "These are the elements that are swappeed:"
                 << "\n";
            swap(arr[j - 1], arr[j]);
            printArray(arr, n);
            j--;

            // printArray(arr, n);
        }
    }
}

/*  cout << "After Using insertion sort: "
       << "\n";
  for (int i = 0; i < n; i++)
  {
      cout << arr[i] << " ";
  }
  cout << "\n";
}*/

int main()
{
    int arr[] = {5, 20, 40, 60, 10, 30};
    int n = sizeof(arr) / sizeof(arr[0]);
    /*cout << "Before Using insertion Sort: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;*/
    // cout << "This is a main functions:" << endl;
    printArray(arr, n);
    insertion_sort(arr, n);
    return 0;
}