#include<iostream>
using namespace std;

int main(){
    int num = 7 ;

    cout<<num<<endl;

    cout<<"Address of num :"<<&num<<endl;
    cout<<"value of num:"<<num<<endl;

    int *ptr = &num;

    /*cout<<"The Address of the sum:"<<&num<<endl;
     cout<<"The Address of the sum:"<<*num<<endl;
    cout<<"The value of the ptr:"<<*ptr<<endl;*/
    cout<<&ptr<<endl;
    cout<<*ptr<<endl;

    //cout<<"Size of the pointer:"<<sizeof(ptr)<<endl;
    //cout<<"Size of the address:"<<sizeof(num)<<endl;

  return 0;
}