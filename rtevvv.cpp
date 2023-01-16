#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"Enter the value:"<<endl;
	cin>>n;
	int ans;
	while(n>0)
	{
		int digit=n%10;
	    ans=(ans*10)+digit;
		n=n/10;
	}
	cout<<ans<<endl;
	return 0;
}
