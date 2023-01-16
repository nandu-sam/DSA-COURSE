#include <iostream>
using namespace std;

int main() {
  int n;
  cin>>n;
  for (int i = 0; i <=n; i++) {
    // print spaces
    for (int j = n-i; j > 0; j--) {
      cout << " ";
    }
    // print stars
    for (int k = 0; k <=i; k++) {
      cout << "*";
    }
    cout << "\n";
  }
  return 0;
}
