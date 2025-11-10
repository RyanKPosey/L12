/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice using pointers
    Due date: 11/6/2025
*/

#include <iostream>
#include "personType.h"
#include <iomanip>
#include <limits>
#include "studentType.h"
#include "professorType.h"

using namespace std;

int main() {
    personType person("Alesandra", "Sandwich", "123 Cookie St", 76.5, "1990-01-04", 'M', 33);
    studentType student("Alice", "Allison", 4.5, "Junior", "S456");
    professorType professor("Dr. Bob", "Builder", "456 Construction Ave", 80.0, "1985-05-12", 'M', 40, "E456","Engineering", "PhD");

    student.setMother(&person);
    student.setFather(&professor);

    personType copyOfStudent = student; // Shallow copy

    personType* people[4] = { &person, &student, &professor, &copyOfStudent };

    for (const auto& p : people) {
        p->print();
        cout << "----------------------------------------" << endl;
    }
}
