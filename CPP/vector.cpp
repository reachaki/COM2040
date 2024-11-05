#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<int> vec;

  // Add elements to the vector
  vec.push_back(10);
  vec.push_back(20);

  // Print the elements of the vector
  cout << "Elements in the vector: ";
  for (std::vector<int>::size_type i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " "; // Initially prints: 10 20
  }
  cout << endl;

  // Resize the vector to hold 5 elements
  vec.resize(5); // New size is 5, new elements are initialized to 0

  // Assign values to the new indices
  vec[3] = 40; // Assigns 40 to index 3
  vec[4] = 50; // Assigns 50 to index 4

  // Print updated elements
  cout << "Elements after resizing and assigning new values: ";
  for (std::vector<int>::size_type i = 0; i < vec.size(); ++i) {
    cout << vec[i] << " "; // Now prints: 10 20 0 40 50
  }
  cout << endl;

  return 0;
}
