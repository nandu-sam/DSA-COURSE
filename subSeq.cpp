#include <bits/stdc++.h>
using namespace std;
bool isSubSeq(string &s1, string &s2)
{
    int n = s1.length(), m = s2.length();
    
    int i = 0;
    int j = 0;
    while (i < n && j < m)
    {
        if (s1[i] == s2[j])
            i++;
            j++;
    }
    return j == m;
}
int main()
{
    string s1 = "A B C D E F"; 
    string s2 = "A D E";
    if (isSubSeq(s1, s2))
        cout << "The string is Subsequence:" << endl;
    else
        cout << "Not an subsequence:" << endl;
    return 0;
}