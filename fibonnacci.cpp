#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
{
	int n;
	cout<<"Enter the n:"<<endl;
	cin>>n;
	int a;
	int b;
	//cout<<a<<" "<<endl;
	for(int i = 1;i<=n;i++)
	{
		int nextnumber= a+b;
		cout<<nextnumber<<" ";
		a = b;
		b = nextnumber;
	}
	return 0;
}
