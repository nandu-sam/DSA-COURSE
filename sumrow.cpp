#include<bits/stdc++.h>
#include<iostream>
using namespace std;

/*bool isPresent(int arr[][3],int target, int row,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
        
     }
     return 0;
}*/
void printSum(int arr[][3],int row,int col){
    cout<<"Printing Sum "<<endl;
    for(int row=0;row<3;row++){
        int sum =0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
            }
            cout<<sum<<" ";
        }
       cout<<endl; 
}
   /* void printcolSum(int arr[][3],int row,int col){
    cout<<"Printing Sum "<<endl;
    for(int col=0;col<3;col++){
        int sum =0;
        for(int row=0;row<3;row++){
            sum +=arr[row][col];
            }
            cout<<sum<<" ";
        }
       cout<<endl;    
}*/
int largestRowSum(int arr[][3],int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int row=0;row<3;row++) {
        int sum =0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
            }
            if(sum > maxi){
                maxi=sum;
                rowIndex=row;
            }
     }
     cout<<"The maximum sum is:"<<maxi<<endl;
     return rowIndex;
}
int main()
{
    int arr[3][3];

    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    /*cout<<"Enter the element to search"<<endl;
    int target;
    cin>>target;
    if(isPresent(arr,target,3,3)){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Not found "<<endl;
    }*/
    /*printSum(arr,3,3);
    printcolSum(arr,3,3);*/
    int ansIndex=largestRowSum(arr,3,3);
    cout<<"Max row is at the index:"<<ansIndex<<endl;
    return 0;
}