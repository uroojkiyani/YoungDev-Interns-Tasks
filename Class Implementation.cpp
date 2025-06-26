#include <iostream>
using namespace std;

// Class definition
class Person {
private:
    string name;
    int age;

public:
    // Constructor
    Person() {
        name = "Unknown";
        age = 0;
    }

    // Method to set values
    void setValues(string personName, int personAge) {
        name = personName;
        age = personAge;
    }

    // Method to display values
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

// Main function
int main() {
    Person p1;  // Object of class

    // Set values using method
    p1.setValues("Ali", 22);

    // Display values
    p1.display();

    return 0;
}
