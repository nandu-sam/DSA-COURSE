#include <iostream>
using namespace std;

void reverse(string& str, int i, int j)
{
    // Base condition
    if (i > j)
    { 
        return;
    }
    // Processing
    swap(str[i],str[j]);
    i++;
    j--;
    // Recursive call
    reverse(str, i, j);
}
int main()
{
    string name = "ABCDEFG";

    reverse(name, 0, name.length() - 1); // passing parameter name,starting value as 0,untill n-1;

    cout <<name;
    return 0;
}