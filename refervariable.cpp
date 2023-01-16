#include <iostream>
using namespace std;
   /*int i = 5;

    int &j = i;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    return 0;*/

   // #include<iostream>
//using namespace std;

int& func(int a) 
{
    int num = a;
    int& ans = num;
    return ans;
}

/*int* fun(int n) {
    int* ptr = &n;
    return ptr;
}

void update2(int& n) {
    n++;
}

void update1(int n) {
    n++;
}*/
int main()
{
   int n = 5;
   
   cout << "Before " << n << endl;
   //update2(n);
   cout << "After " << n << endl;

    func(a);
    //fun(n);

    return 0;
}
