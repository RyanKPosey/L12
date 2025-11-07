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

using namespace std;

int main() {
    // init people array
    personType **people = new personType*[5];
    string firstName;
    string lastName;
    int age;
    string address;
    double height;
    string dob;
    char gender;

    // get user input
    for (int i = 0; i < 5; i++) {
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter first name for person " << i + 1 << ": ";
        std::getline(cin, firstName);
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter last name for person " << i + 1 << ": ";
        std::getline(cin, lastName);
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter address for person " << i + 1 << ": ";
        std::getline(cin, address);
        cout << "Enter height (in inches) for person " << i + 1 << ": ";
        cin >> height;
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cout << "Enter DOB for person " << i + 1 << ": ";
        std::getline(cin, dob);
        cout << "Enter gender for person " << i + 1 << "(ex: 'M' or 'F'): ";
        cin >> gender;
        cout << "Enter age for person " << i + 1 << ": ";
        cin >> age;
        // create personType object and add to array
        people[i] = new personType(firstName, lastName, address, height, dob, gender, age);
    }

    // print people
    for (int i = 0; i < 5; i++) {
        cout << "[Person " << i + 1 << "]" << endl;
        people[i]->print();
    }

    // delete people

    for(int i = 0; i < 5; i++) {
        delete people[i];
    }

    delete[] people;

    cout << "All memory freed. Clear for pancakes!" << endl;

}
