#include <iostream>
#include <string>

using namespace std;

// Base class
class SpreadsheetCell {
private:
  double
      value; // Private attribute: can only be accessed within SpreadsheetCell

protected:
  string formula; // Protected attribute: accessible in SpreadsheetCell and
                  // derived classes

public:
  // Static member to count the number of cells created
  static int cellCount;

  // Constructor
  SpreadsheetCell(double initialValue) : value(initialValue), formula("") {
    cellCount++; // Increment cell count when a new cell is created
  }

  // Public method to set the value
  void setValue(double newValue) { value = newValue; }

  // Public method to get the value
  double getValue() const { return value; }

  // Protected method to set a formula
  void setFormula(const string &newFormula) { formula = newFormula; }

  // Public method to get the formula
  string getFormula() const { return formula; }

  // Static method to get the number of cells created
  static int getCellCount() { return cellCount; }
};

// Initialize the static member
int SpreadsheetCell::cellCount = 0;

// Derived class
class FormulaCell : public SpreadsheetCell {
public:
  // Constructor
  FormulaCell(double initialValue, const string &initialFormula)
      : SpreadsheetCell(initialValue) {
    setFormula(initialFormula); // Set the formula using the protected method
  }

  // Method to display the cell's information
  void displayInfo() {
    cout << "Value: " << getValue() << ", Formula: " << getFormula() << endl;
  }
};

int main() {
  // Create instances of SpreadsheetCell
  SpreadsheetCell cell1(5.0);
  cell1.setValue(10.0);
  cout << "Cell1 Value: " << cell1.getValue() << endl;

  // Create an instance of FormulaCell
  FormulaCell formulaCell(7.0, "A1 + B1");
  formulaCell.displayInfo(); // Displaying the FormulaCell's information

  // Display the number of cells created
  cout << "Total cells created: " << SpreadsheetCell::getCellCount() << endl;

  return 0;
}
