/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice polymorphism and inheritance
    Due date: 11/9/2025
*/

#include <iostream>
#include "personType.h"
#include <iomanip>
#include <limits>
#include "studentType.h"
#include "professorType.h"

using namespace std;

int main() {
    personType* person = new personType("Alesandra", "Sandwich", "123 Cookie St", 76.5, "1990-01-04", 'M', 33);
    studentType* student = new studentType("Alice", "Allison", 4.5, "Junior", "S456");
    professorType* professor = new professorType("Dr. Bob", "Builder", "456 Construction Ave", 80.0, "1985-05-12", 'M', 40, "E456","Engineering", "PhD");

    student->setMother(person);
    student->setFather(professor);

    personType* copyOfStudent = new personType(*student); // Shallow copy

    copyOfStudent->setFirstName("CopiedAlice");
    copyOfStudent->setLastName("CopiedAllison");
    copyOfStudent->setAddress("456 New Address St");
    copyOfStudent->setAge(21);
    copyOfStudent->setHeight(65.0);
    copyOfStudent->setDOB("2002-02-02");
    copyOfStudent->setGender('F');

    personType* people[4] = { person, student, professor, copyOfStudent };

    for (const auto& p : people) {
        p->print();
        cout << "----------------------------------------" << endl;
    }

    cout << "\nClean up memory\n";
    // iterate by reference so we can null out the array entries after delete
    for (auto& p : people) {
        delete p;
        p = nullptr;
    }

    cout << "Memory has been freed\n";
    return 0;
}
