#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v) // vector's type nd its name pass as a reference because if ts not an reference there will be only a copy of elements and no changes will be reflected
{
    for (int i = 0; i < v.size(); i++) // v.size is a length of the vectors
    {
        cout << v[i] << " ";
    }
    cout << "\n"; // we mostly use \n rather than endl;
}
int main()
{
    vector<int> v;                                 // creating a vector
    cout << "Initial size = " << v.size() << "\n"; // printing the size of vector
    int x;
    cout << "Enter five integer value:";
    for (int i = 0; i < 5; i++)
    {
        cin >> x;
        v.push_back(x);
    }
    cout << "size after adding 5 values:";
    cout << v.size() << "\n";
    // cout << "current contents: \n";
    display(v);
    v.push_back(6); // adding integer 6 at the end of the vector
    display(v);
    // INSERTING ELEMENTS
    vector<int>::iterator itr = v.begin(); // iterator
    itr = itr + 2;                         // points to the 3 element in the vector
    v.insert(itr, 9);
    cout << "The elements of the vector after insertion:\n";
    display(v);

    v.erase(v.begin() + 3);
    cout << "the contents after deletion:\n";
    display(v);
    return 0;
}