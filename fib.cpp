#include<iostream>
using namespace std;
int main()
{
	int n = 10;
	//cout<<"Enter The value:";
	//cin>>n;
	int a=0;
	int b=1;
	int nextnumber;
	//int next number;
	for(int i=1;i<=n;i++)
	{
	  int nextnumber = a+b;
	  cout<<nextnumber<<endl;
	  a=b;
	  b=nextnumber;
	}
}
