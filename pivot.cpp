#include<iostream>
using namespace std;

int getPivot(int arr[], int n)
{
	int start = 0;
	int end = n-1;
	int mid = (start+end/2);
	
	while(start<end)
	{
		if(arr[mid]>=arr[0])
		{
			start = mid+1;
		}
		else{
			end=mid;
		}
		mid=(start+end/2);
	}
	return start;
}
int main()
{
	int arr[6]={7,6,5,8,4,1};
	cout<<"Pivot is:"<<getPivot(arr,5)<<endl;
}

	
