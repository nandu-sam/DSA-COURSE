#include<bits/stdc++.h>
using namespace std;
int Dup(int arr[],int size){
    int j=0;
    for(int i=0;i<size-1;i++){
        if(arr[i]!=arr[i+1]){
            arr[j]=arr[i];
            j++;
        }
    }
    arr[j]=arr[size-1];
}
int main()
{
    int arr[]={1,2,2,3,3,3,4,4};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"The modified array is:"<<Dup(arr,size)<<endl;;
    for(int i=0;i<size;i++)
    cout<<arr[i]<<" ";
    return 0;
}
