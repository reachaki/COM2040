#include <cmath>
#include <iostream>
using namespace std;

// Base class
class Shape {
public:
  // Virtual function for run-time polymorphism
  virtual void draw() { cout << "Drawing a Shape" << endl; }

  // Function to calculate area, demonstrating compile-time polymorphism
  double area(double radius) {
    return M_PI * radius * radius; // Area of circle
  }

  double area(double length, double width) {
    return length * width; // Area of rectangle
  }
};

// Derived class for Circle
class Circle : public Shape {
public:
  void draw() override { // Override base class draw function
    cout << "Drawing a Circle" << endl;
  }
};

// Derived class for Rectangle
class Rectangle : public Shape {
public:
  void draw() override { // Override base class draw function
    cout << "Drawing a Rectangle" << endl;
  }
};

int main() {
  Shape *shape1; // Base class pointer
  Shape *shape2; // Base class pointer

  Circle circle;       // Create Circle object
  Rectangle rectangle; // Create Rectangle object

  shape1 = &circle;    // Point to Circle
  shape2 = &rectangle; // Point to Rectangle

  // Call the draw function (run-time polymorphism)
  shape1->draw(); // Output: Drawing a Circle
  shape2->draw(); // Output: Drawing a Rectangle

  // Demonstrating compile-time polymorphism
  cout << "Area of circle with radius 5: " << shape1->area(5)
       << endl; // Calls area for circle
  cout << "Area of rectangle with length 4 and width 6: " << shape1->area(4, 6)
       << endl; // Calls area for rectangle

  return 0;
}
