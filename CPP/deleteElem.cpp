#include <iostream>
using namespace std;

void deleteElement(int *&arr, int &size, int indexToDelete) {
  // Check if the index is valid
  if (indexToDelete < 0 || indexToDelete >= size) {
    cout << "Invalid index." << endl;
    return;
  }

  // Shift elements to the left
  for (int i = indexToDelete; i < size - 1; ++i) {
    arr[i] = arr[i + 1]; // Shift elements left
  }

  // Decrease size of the array
  size--;

  // Optionally set the last element to a default value
  arr[size] = 0; // This is optional, can help to visualize the removed space
}

void printArray(int *arr, int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main() {
  int size;

  // Ask the user for the array size
  cout << "Enter the size of the array: ";
  cin >> size;

  // Dynamic memory allocation for the array
  int *arr = new int[size];

  // Input elements into the array
  cout << "Enter " << size << " elements:" << endl;
  for (int i = 0; i < size; ++i) {
    cout << "Element " << (i + 1) << ": ";
    cin >> arr[i];
  }

  cout << "Original array: ";
  printArray(arr, size);

  // Ask the user which element to delete
  int indexToDelete;
  cout << "Enter the index of the element to delete (0 to " << (size - 1)
       << "): ";
  cin >> indexToDelete;

  deleteElement(arr, size,
                indexToDelete); // Call the function to delete the element

  cout << "Array after deletion: ";
  printArray(arr, size);

  // Don't forget to deallocate the memory!
  delete[] arr;

  return 0;
}
