/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice using pointers
    Due date: 11/4/2025
*/

#include <iostream>
#include "personType.h"
#include <iomanip>

using namespace std;

int main() {
    // init non pointer variables
    int x = 5;
    int y = 10;
    int z = 1;
    char c = 'A';
    double price = 5.2;
    personType person("Quom", "Sandwich", "124 Firehouse Way", 76, "04-04-2026", 'M', 24);


    cout << "Non-pointer variable values:" << endl;
    // label (20) | value (12) | address (20)
    cout << left << setw(20) << "x:"     << setw(12) << x      << setw(20) << "address:" << &x << endl;
    cout << left << setw(20) << "y:"     << setw(12) << y      << setw(20) << "address:" << &y << endl;
    cout << left << setw(20) << "z:"     << setw(12) << z      << setw(20) << "address:" << &z << endl;
    cout << left << setw(20) << "c:"     << setw(12) << c      << setw(20) << "address:" << (void*)&c << endl;
    cout << left << setw(20) << "price:" 
        << fixed << setprecision(2) << setw(12) << price 
        << defaultfloat << setprecision(6) << setw(20) << "address:" << &price << endl;
    cout << "person: " << endl; person.print(); cout << endl;
    cout << left << setw(20) << "address:" << &person << endl << endl;

    // init pointers

    int *xPtr = &x;
    int *yPtr = &y;
    int *zPtr = &z;
    char *cPtr = &c;
    double *pricePtr = &price;
    personType *personPtr = &person;

    cout << "Pointer variable values:" << endl;
    cout << left << setw(10) << "xPtr: " << setw(10) << *xPtr << setw(10) << "address:" << static_cast<const void*>(xPtr) << endl;
    cout << left << setw(10) << "yPtr: " << setw(10) << *yPtr << setw(10) << "address:" << static_cast<const void*>(yPtr) << endl;
    cout << left << setw(10) << "zPtr: " << setw(10) << *zPtr << setw(10) << "address:" << static_cast<const void*>(zPtr) << endl;
    cout << left << setw(10) << "cPtr: " << setw(10) << *cPtr << setw(10) << "address:" << static_cast<const void*>(cPtr) << endl;
    cout << left << setw(10) << "pricePtr: " 
        << fixed << setprecision(2) << setw(10) << *pricePtr 
        << defaultfloat << setprecision(6) << setw(10) << "address:" << static_cast<const void*>(pricePtr) << endl;
    cout << "personPtr: " << endl; personPtr->print(); cout << endl;

    cout << "[Before changes via pointers]" << endl;
    cout << left << setw(10) << "xPtr: " << setw(10) << *xPtr << setw(10) << "address:" << static_cast<const void*>(xPtr) << endl;
    cout << left << setw(10) << "yPtr: " << setw(10) << *yPtr << setw(10) << "address:" << static_cast<const void*>(yPtr) << endl;
    cout << left << setw(10) << "zPtr: " << setw(10) << *zPtr << setw(10) << "address:" << static_cast<const void*>(zPtr) << endl;
    cout << left << setw(10) << "cPtr: " << setw(10) << *cPtr << setw(10) << "address:" << static_cast<const void*>(cPtr) << endl;
    // Ensure pricePtr dereferenced value has correct precision
    cout << left << setw(10) << "pricePtr: " 
        << fixed << setprecision(2) << setw(10) << *pricePtr 
        << defaultfloat << setprecision(6) << setw(10) << "address:" << static_cast<const void*>(pricePtr) << endl;
    cout << "personPtr: " << endl; personPtr->print(); cout << endl;

    // modify values via pointers
    *xPtr = 20;
    *yPtr = 40;
    *zPtr = 40;
    *cPtr = 'Z';
    *pricePtr = 99.99;
    personPtr->setFirstName("Sandwich");
    personPtr->setLastName("Lettuce");
    personPtr->setAddress("999 Pointer St");
    personPtr->setHeight(70);
    personPtr->setDOB("11-01-2040");
    personPtr->setGender('F');
    personPtr->setAge(30);

    cout << "[After changes via pointers]" << endl;
    cout << left << setw(10) << "xPtr: " << setw(10) << *xPtr << setw(10) << "address:" << static_cast<const void*>(xPtr) << endl;
    cout << left << setw(10) << "yPtr: " << setw(10) << *yPtr << setw(10) << "address:" << static_cast<const void*>(yPtr) << endl;
    cout << left << setw(10) << "zPtr: " << setw(10) << *zPtr << setw(10) << "address:" << static_cast<const void*>(zPtr) << endl;
    cout << left << setw(10) << "cPtr: " << setw(10) << *cPtr << setw(10) << "address:" << static_cast<const void*>(cPtr) << endl;
    // Once again ensure pricePtr dereferenced value has correct precision
    cout << left << setw(10) << "pricePtr: " 
        << fixed << setprecision(2) << setw(10) << *pricePtr 
        << defaultfloat << setprecision(6) << setw(10) << "address:" << static_cast<const void*>(pricePtr) << endl;
    cout << "personPtr: " << endl; personPtr->print(); cout << endl;
}
