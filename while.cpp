#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int i =2;
	 while(i<=n)
	 {
	 	if(n%i==0)
	 	{
	 		cout<<"not an prime:"<<endl;
		 }
		 else
		 {
		 	cout<<"is an prime:"<<endl;
		 	i=i+1;
		 }
		 return 0;
	 }
}
