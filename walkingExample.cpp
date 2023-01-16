#include <iostream>
using namespace std;
void reachHome(int src, int dest)
{
    cout << "Source" << src  << "Dest" << dest << endl;
    // Base condition
    if (src == dest)
    {
        cout << "You have reached the dest:" << endl;
        return;
    }
    // processing
    src++;

    reachHome(src, dest);
}

int main()
{
    int dest = 10; // declare values for dest
    int src = 1;   // declare values for src

    cout << endl;
    reachHome(src, dest);
    return 0;
}