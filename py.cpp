#include <iostream>
using namespace std;

int main() {
  int n = 5;
  for (int i = 1; i <= n; i++) {
    // print spaces
    for (int j = 1; j < 2*n - 1; j++) {
    if(j>=n-(i-1) && j<=n+(i-1))
    {
    	cout<<"*";
	}
	else{
		cout<<" ";
	}
}
cout<<"\n";
}
}
