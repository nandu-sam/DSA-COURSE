#include<iostream>
using namespace std;
int countBits(int n)
{
	int res=0;
	while(n>0){
		n=(n&(n-1));
		res++;
	}
	return res;
	
}
int main()
{
	int n;
	cin>>n;
	cout<<"The Result is:"<<countBits(n)<<endl;
	return 0;
}
