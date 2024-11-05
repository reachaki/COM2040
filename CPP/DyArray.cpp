#include <iostream>

using namespace std;

int main() {
  int size;

  // Ask the user for the size of the array
  cout << "Enter the number of elements in the array: ";
  cin >> size;

  // Allocate memory for the array dynamically
  int *arr = new int[size];

  // Assign values to the array
  for (int i = 0; i < size; ++i) {
    arr[i] = i + 1; // Assigning values 1, 2, ..., size
  }

  // Display the values in the array
  cout << "The elements in the array are: ";
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Deallocate the memory for the array
  delete[] arr; // Freeing up the allocated memory

  // Set pointer to nullptr
}