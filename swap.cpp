#include<iostream>
using namespace std;

void printarr(int arr[],int n )
{
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}cout<<endl;
}

void swapalt(int arr[],int size)
{
	for(int i=0;i<size;i+=2)
	{
		if(i+1 < size)
		{
			swap(arr[i],arr[i+1]);
		}
	}
}
int main()
{
	int even[10] = {2,3,4,5,6,7};
	
	
	swapalt(even,6);
	printarr(even,6);
	
	return 0;
}
