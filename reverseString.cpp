#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool checkPalindrome(char a[], int n )
{
    int s=0;//this follows a two pointers concept now this is a start pointers
    int e=n-1;//this is the end pointer
    while(s<=e){//start should be equal to the end untill then process the statement
        if(a[s] != a[e]){//when the start is not equal or start has moved forward then return 0
        return 0;
    }
    else{//or else increement start and decrement end
        s++;
        e--;    
    }
}
return 1;
}
void reverse(char name[],int n){//when the array is given strat the operation from start and end 
    int s=0;//start should be 0
    int e=n-1;//e will be n-1 or in the case of vector it will be size()-1
    while(s<e){//edge case
        swap(name[s++],name[e--]);//again strat and end will be incremented or decremented as per the function
    }
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

    cout<<"Enter the name "<<endl;
    cin>> name;

    cout<<"Your name is "<<endl;
    cout<< name <<endl;
    int len = getLength(name);
    cout<<"length:"<<len<<endl;
     reverse(name, len);
     cout<<"Your name is "<<endl;
     cout<< name <<endl;
     cout<<"Palindrome :"<<checkPalindrome(name,len)<<endl;
    return 0;
}