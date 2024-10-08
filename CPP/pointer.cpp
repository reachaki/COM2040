#include <iostream>
using namespace std;

int main() {
  int a = 10;                            // 1
  int *p = &a;                           // 2
  cout << "Address: " << p << std::endl; // 3
  cout << "Value: " << *p << std::endl;  // 4

  return 0;
}
