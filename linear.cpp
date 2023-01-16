#include<iostream>
using namespace std;

bool search(int arr[],int size,int key){
	for(int i=0;i<size;i++)
	{
		if(arr[i]==key){
			return 1;
		}
		
	}
	return 0;
}
int main()
{
	int arr[10] = { 2,7 ,5,6,1,19,17,11,-17,-10};
	
	cout<<"Enter the Key to be founded:"<<endl;
	int key;
	cin>>key;
	
	
	bool found=search(arr, 10,key );
	
	if (found)
	{
		cout<<"The key is found:"<<endl;
	}
	else{
		cout<<"The key is not found :"<<endl;
	}
	return 0;
}
