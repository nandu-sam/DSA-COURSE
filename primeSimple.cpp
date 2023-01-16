#include<iostream>
using namespace std;
int main()
{
    int n, i, count=0;
    cout << "Enter the n:" << endl;
    cin >>n;
    for (int i = 2; i<n; i++)
    {
        if (n%i == 0)
        {
            count = count++;
        }
        if (count == 1)
        {
            cout << "is prime:" << endl;
        }
        else
        {
            cout << "is not prime:" << endl;
        }
    }
    //return 0;
}
