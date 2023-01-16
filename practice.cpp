#include<bits/stdc++.h>
#include<iostream>
using namespace std;
bool checkPalindrome(char a[],int n){
	int s=0;
	int e=n-1;
	while(s<=e){
		if(a[s] !=a[e]){
		return 0;
	}
	else{
		s++;
		e--;
	}
}
return 1;
}
int getLength(char name[]){//get length function is used to find the length of the array 
    int count=0;//we are keeping the count of the itertation 
    for(int i=0;name[i]!='\0';i++){//this is a edge caes wihile using character array we here find the size as per the array and untill it will find out the null character is in the array the operation terminator
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    int s,e,n;

    cout<<"Enter the name "<<endl;
    cin>> name;

    cout<<"Your name is "<<endl;
    cout<< name <<endl;
    int len = getLength(name);
    cout<<"length:"<<len<<endl;
    cout<<"Palindrome :"<<checkPalindrome(name,len)<<endl;
    return 0;
}
