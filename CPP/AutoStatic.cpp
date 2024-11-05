#include <iostream>
using namespace std;

void exampleFunction() {
  // Static array
  static int staticArr[5] = {1, 2, 3, 4,
                             5}; // Retains its value across function calls

  // Automatic (local) array
  int autoArr[5] = {10, 20, 30, 40, 50}; // Gets re-initialized with each call

  // Constant array
  const int constArr[5] = {1, 2, 3, 4, 5}; // Cannot be modified

  // Modify the first element of the static array
  staticArr[0] += 10;

  // Modify the first element of the automatic array
  autoArr[0] += 5; // Increment the first element of autoArr

  // Attempt to modify the constant array (this line will cause a compilation
  // error if uncommented) constArr[0] += 10; // This will cause an error
  // because constArr is constant

  // Output the contents of all arrays
  cout << "Inside exampleFunction:" << endl;
  cout << "Static Array: ";
  for (int i = 0; i < 5; ++i) {
    cout << staticArr[i] << " "; // Will retain changes
  }
  cout << endl;

  cout << "Automatic Array: ";
  for (int i = 0; i < 5; ++i) {
    cout << autoArr[i] << " "; // Will reset every time
  }
  cout << endl;

  cout << "Constant Array: ";
  for (int i = 0; i < 5; ++i) {
    cout << constArr[i] << " "; // Will remain unchanged
  }
  cout << endl << endl; // Extra new line for clarity
}

int main() {
  cout << "First call to exampleFunction:" << endl;
  exampleFunction(); // First call

  cout << "Second call to exampleFunction:" << endl;
  exampleFunction(); // Second call

  cout << "Third call to exampleFunction:" << endl;
  exampleFunction(); // Third call

  return 0;
}
