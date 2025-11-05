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
    cout << left << setw(20) << "price:" << setw(12) << price  << setw(20) << "address:" << &price << endl;
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
    cout << left << setw(10) << "xPtr: " << setw(10) << *xPtr << setw(10) << "address:" << (void*)xPtr << endl;
    cout << left << setw(10) << "yPtr: " << setw(10) << *yPtr << setw(10) << "address:" << (void*)yPtr << endl;
    cout << left << setw(10) << "zPtr: " << setw(10) << *zPtr << setw(10) << "address:" << (void*)zPtr << endl;
    cout << left << setw(10) << "cPtr: " << setw(10) << *cPtr << setw(10) << "address:" << (void*)cPtr << endl;
    cout << left << setw(10) << "pricePtr: " << setw(10) << *pricePtr << setw(10) << "address:" << (void*)pricePtr << endl;
    cout << "personPtr: " << endl; personPtr->print(); cout << endl;
}
