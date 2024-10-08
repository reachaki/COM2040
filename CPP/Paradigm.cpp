#include <iostream>
using namespace std;

// Defining a simple class
class Animal {
public:
  string name;

  Animal(string animalName) { name = animalName; }

  void makeSound() { cout << name << " makes a sound!" << endl; }
};

int main() {
  Animal dog("Dog");
  dog.makeSound(); // Output: Dog makes a sound!
  return 0;
}
