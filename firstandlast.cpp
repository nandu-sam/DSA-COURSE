#include <iostream>
using namespace std;

int first(int arr[],int start,int end,int k,int n)
{
    //int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    if (start >= end)
    {
        return 0;
    }
    if (arr[mid] == k)
    {
        return key;
    }
    if (arr[mid-1] > k)
    {
        //start++;
        return first(arr, mid + 1,start, k,n);

    }
    else
    {
        //end--;
        return first(arr,end, mid - 1, n,k);
    }
}
int last(int arr[],int start,int end, int n, int k)
{
    //int start = 0, end = n - 1;
    int mid = start + (end - start) / 2;

    if (start >= end)
    {
        return 0;
    }
   if (arr[mid] == k)
    {
        return k;
    }
    if (arr[mid-1] > k)
    {
        //start++;
        return last(arr,end, mid - 1, n,k);

    }
    else
    {
        //end--;
        return last(arr, mid + 1,start, k,n);
    }
    mid=start+(end-start)/2;
}
int main() {

    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int k= 18;
    int n,start,end;

    int ans=first(arr,0,n-1,k,n);
    int ans1=last(arr,0,n-1,k,n);

    cout<<"First element is: "<<first(arr,0,n-1,k,n)<<"Last element is:"<<last(arr,0,n-1,k,n)<<endl;
    return 0;
}