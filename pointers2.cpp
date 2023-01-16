#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {2, 4, 7};

    cout << "The address of the first memory block:" << arr << endl;
    cout << "The value of the first block:"<<&arr[0]<<endl;//address of the 0th index
    cout << "The value of the first block:"<<arr[0]<<endl;//value of the 0th index 
    cout << "The value of the index blocks:"<< *arr<<endl;


     cout << "The value of the 1st index block:"<< *arr+1 <<endl;//Address of 0th index + 1
     cout << "The value of the 1st index block:"<< *(arr+1) <<endl;//value of the location 0 + 1;
    return 0;
}
