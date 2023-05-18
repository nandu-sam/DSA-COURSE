/* THIS THE CODE WITH BRUTE FORCE APPROACH

#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    set<int> s;
    vector<int> Union;
    for (int i = 0; i < n; i++)
        s.insert(arr1[i]); // inserting the array 1 elements into the set
    for (int i = 0; i < m; i++)
        s.insert(arr2[i]); // inserting array 2 elements to the set
    for (auto &it : s)
        Union.push_back(it); // will iterate in the set and the pushback the elements in the union array and return union
    return Union;
}

int main()

{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr 1 and arr 2 is :  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}*/

// OPTIMAL APPROACH WITH TC OF O(N) AND SC OF O(1)

#include <bits/stdc++.h>

using namespace std;

vector<int> FindUnion(int arr1[], int arr2[], int n, int m)
{
    int i = 0, j = 0;  // pointers
    vector<int> Union; // Union vector
    while (i < n && j < m)
    {
        if (arr1[i] <= arr2[j]) // Case 1 and 2
        {
            if (Union.size() == 0 || Union.back() != arr1[i])
                // IF THE UNION ARRAY IS INITIALLY ZERO OR EMPTY THEN CHECK IF THE ARRAY 1 ELEMENT IS LESS THAN ARRAY 2 ELEMENT THEN CHECK THE UNION LAST ELEMENT IF IT IS NOT SAME THEN JUST PUSH THE ARRAY 1 ELEMENT INTO THE BACK OF THE UNION ARRAY
                Union.push_back(arr1[i]);
            i++; // AND INCREMENT THE I POINTER
        }
        else // case 3
        {
            if (Union.size() == 0 || Union.back() != arr2[j])
                // IF THE UNION ARRAY LAST ELEMNT IS NOT EQUAL TO THE ARRAY 2 ELEMENT THEN PUSH THE ARRAY 2 ELEMENT INTO THE BACK OF THE UNION ARRAY
                Union.push_back(arr2[j]);
            j++; // INCREMENT J POINTER
        }
    }
    while (i < n) // IF any element left in arr1
    {
        if (Union.back() != arr1[i])
            // AFTER THE ITERATION OF THE FIRST ARRAY OR ARRAY 1 IF THE ELEMENTS ARE STILL REMAINING THEN JUST PUSH THE ARRAY ELEMENTS INTO THE BACK OF UNION ARRAY
            Union.push_back(arr1[i]);
        i++;
    }
    while (j < m) // If any elements left in arr2
    {
        if (Union.back() != arr2[j])
            Union.push_back(arr2[j]);
        j++;
    }
    return Union;
}

int main()

{
    int n = 10, m = 7;
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    vector<int> Union = FindUnion(arr1, arr2, n, m);
    cout << "Union of arr1 and arr2 is  " << endl;
    for (auto &val : Union)
        cout << val << " ";
    return 0;
}