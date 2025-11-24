/*
    Programmer: Ryan Posey
    Assignment: L12E
    Purpose: Demonstrate abstract base class polymorphism (personType)
    Date: 11/24/2025
*/

#include <iostream>
#include <vector>
#include "personType.h"
#include "studentType.h"
#include "professorType.h"

using namespace std;


int main() {
    // Base class pointer variables
    personType* person1 = new studentType("Jonathan", "Blueberry", 3.8, "Senior", "S12345");
    personType* person2 = new professorType("Janathan", "Sandwich", "123 University St", 76.0, "1970-01-01", 'F', 55, "E456", "Computer Science", "PhD");
    studentType student("Chocolate Bar", "Ice Cream", 3.9, "Senior", "S100");
    professorType professor("Cheese", "Fondu", "456 College Ave", 68.0, "1965-05-05", 'M', 83.0, "E789", "Culinary Arts", "PhD");

    // Call overriden virtual methods
    cout << "\n--- Polymorphic Print via Base Pointers ---\n";
    person1->print();
    cout << "-----------------------------\n";
    person2->print();
    cout << "\n-----PersonType& param test----\n";
    cout << "\n--- Student equals professor test (professorType as arg)---\n";
    student.equals(*person2) ? 
        cout << "Student equals person2\n" : 
        cout << "Student does not equal person2\n";
    cout << "-----------------------------\n";
    cout << "\n--- Professor equals student test (studentType as arg) ---\n";
    professor.equals(*person1) ? 
        cout << "Professor equals person1\n" : 
        cout << "Professor does not equal person1\n";
    cout << "-----------------------------\n";

    // Free heap memory
    delete person1;
    delete person2;
}