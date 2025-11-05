/*
    Programmer: Ryan Posey
    Assignment: L12
    Purpose: Practice using pointers
    Due date: 11/4/2025
*/

#include <iostream>
#include "personType.h"

using namespace std;

int main() {
    // init non pointer variables
    int x = 5;
    int y = 10;
    int z = 1;
    char c = 'A';
    double price = 5.2;
    personType person("Quom", "Sandwich", "124 Firehouse Way", 76, "04-04-2026", 'M', 24);

    // init pointers

    int *xPtr = &x;
    int *yPtr = &y;
    int *zPtr = &z;
    char *cPtr = &c;
    double *pricePtr = &price;
    personType *personPtr = &person;


    
}
