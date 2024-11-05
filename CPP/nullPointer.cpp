#include <iostream>

int main() {
  int *ptr = NULL; // Initializing pointer to NULL

  // This will cause a runtime error (segmentation fault)
  std::cout << *ptr << std::endl; // Attempting to dereference NULL

  return 0;
}
