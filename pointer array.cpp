#include<iostream>
using namespace std;

int main () {

    int arr[10] = {23, 122, 41, 67};

   
    /*cout <<" address of first memory block is " << arr << endl;//Address of first block
    cout << arr[0] << endl;
    cout <<" address of first memory block is " << &arr[0] << endl;
    cout << "The value of the 0th block: " << *arr << endl;
    //cout << "5th " << *arr + 1 << endl;
    cout<<endl<<endl<<endl;
    
    
    cout<<"The address of the 1st block:"<<&arr[1]<<endl;
    cout << "The value of the 1st block " <<*(arr + 1) << endl;
    
    cout<<"The address of the 2nd block:"<<&arr[2]<<endl;
    cout << "The value of the 2nd block " <<*(arr + 2) << endl;
    
    cout<<"The address of the 3rd block:"<<&arr[3]<<endl;
    cout << "The value of the 3rd block " <<*(arr + 3) << endl;
    cout<<"    "<<*(arr) + 4<<endl;*/
    
    
    
    
    
    //cout << "7th " << *(arr) + 1 << endl;
    //cout << "8th " << arr[2] << endl;
    //cout << "9th " << *(arr+2) << endl;
    
	
	int i = 3;//the iteration is on the 3rd block of the array
    cout << i[arr] << endl;//prints the address of that block  
    int temp[10] = {1,2};
   cout << sizeof(temp) << endl;//holds the size of temp array 4*10 = 40;
   cout << " 1st " <<  sizeof(*temp) << endl;
   cout << " 2nd " <<  sizeof(&temp) << endl;
   cout<<endl<<endl<<endl;
   int *ptr = &temp[0];
   cout << sizeof(ptr) << endl ;
   cout << sizeof(*ptr) << endl ;
   cout << sizeof(&ptr) << endl ;
   int a[20] = {1,2,3,5};
   cout << " ->" << &a[0] << endl;
   cout << &a << endl;
   cout << a << endl;
   int *p = &a[0];
   cout << p << endl;
   cout << *p << endl;
   cout << "-> " << &p << endl;

  // int arr[10];

//ERROR
   //arr = arr+1;


cout<<endl<<endl;
    *ptr = arr[0];
    cout << ptr << endl;
    ptr = ptr + 1;
    cout << ptr << endl;






    return  0;
}
