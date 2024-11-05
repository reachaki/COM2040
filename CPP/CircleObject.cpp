#include <iostream>

using namespace std;

class Circle {
private:
  double radius;

public:
  // Default constructor
  Circle() : radius(0) {}

  // Constructor that accepts a radius
  Circle(double r) : radius(r) {}

  double area() const { return 3.14159 * radius * radius; }

  void setRadius(double r) { radius = r; }
};

int main() {
  Circle c;

  double a = 0;
  cout << "Enter radius: ";
  cin >> a;

  c.setRadius(a);

  cout << "Area: " << c.area() << endl;
  return 0;
}
