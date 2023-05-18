#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key)
{
	int start = 0;
	int end = size-1;
	int mid = (start + end)/2;
	
	while(start <= end)
	{
		if(arr[mid] == key)
		{
			return mid;
		}
		
		if(key > arr[mid]){
			start = mid + 1;
		}
		else{
			end = mid - 1;
		}
		mid = (start+end)/2;
	}
	return -1;
}




int main()
{
	int even[8] = {2,4,6,8,10,12,14,16};
	//int odd[5] = {3,8,11,14,16};
	
	int evenIndex = binarySearch(even, 8, 8);
	cout<<"Index of 8 is "<<evenIndex << endl;
	
//	int oddIndex = binarySearch(odd, 5, 16);
	//cout<<"Inddex of 16 is "<<oddIndex<<endl;
	
	
	
	return 0;
}
