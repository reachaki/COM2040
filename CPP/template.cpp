#include <iostream>
#include <string>
using namespace std;

// Function template for adding two values
template <typename T> T add(T a, T b) { return a + b; }

// Class template for a Box
template <typename T> class Box {
private:
  T value; // The value stored in the box
public:
  // Constructor to initialize the value
  Box(T v) : value(v) {}

  // Method to retrieve the value
  T getValue() const { return value; }
};

int main() {
  // Using the function template
  cout << "Adding integers: " << add(5, 10) << endl;    // 15
  cout << "Adding doubles: " << add(5.5, 10.2) << endl; // 15.7
  cout << "Adding floats: " << add(2.3f, 3.7f) << endl; // 6.0

  // Using the class template
  Box<int> intBox(42);
  Box<double> doubleBox(3.14);
  Box<string> stringBox("Hello, Templates!");

  // Accessing values from the boxes
  cout << "Integer Box Value: " << intBox.getValue() << endl;   // 42
  cout << "Double Box Value: " << doubleBox.getValue() << endl; // 3.14
  cout << "String Box Value: " << stringBox.getValue()
       << endl; // Hello, Templates!

  return 0;
}
