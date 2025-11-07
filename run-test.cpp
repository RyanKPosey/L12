/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice using pointers
    Due date: 11/6/2025
*/

#include <iostream>
#include "personType.h"
#include <iomanip>

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
        cout << "Enter first name for person " << i + 1 << ": ";
        cin >> firstName;
        cout << "Enter last name for person " << i + 1 << ": ";
        cin >> lastName;
        cout << "Enter age for person " << i + 1 << ": ";
        cin >> age;
        cout << "Enter address for person " << i + 1 << ": ";
        cin >> address;
        cout << "Enter height (in inches) for person " << i + 1 << ": ";
        cin >> height;
        cout << "Enter DOB for person " << i + 1 << ": ";
        cin >> dob;
        cout << "Enter gender for person ex: 'M'" << i + 1 << ": ";
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
