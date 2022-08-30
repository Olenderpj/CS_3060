//
// Created by PJ Olender on 8/28/22.
//
#include <cstdlib>
#include <iostream>
#include "FeetInches.h"


FeetInches::FeetInches(const FeetInches &oldFIObject) {

}

void FeetInches::simplify(const FeetInches &right) {
    if (inches >= 12)
    {
        feet += (inches / 12);
        inches = inches % 12;
    }
    else if (inches < 0)
    {
        feet -= ((abs(inches) / 12) + 1);
        inches = 12 - (abs(inches) % 12);
    }
}

FeetInches FeetInches::multiply(const FeetInches &input) {
    FeetInches temp;

    temp.inches = ((feet * 12 + inches) * (input.feet * 12 + input.inches));
    temp.inches /= 12;
    temp.simplify();

    return temp;
}

int FeetInches::getFeet() const {
    return feet;
}

void FeetInches::setFeet(int f) {
    FeetInches::feet = f;
}

int FeetInches::getInches() const {
    return inches;
}

void FeetInches::setInches(int i) {
    FeetInches::inches = i;
}

FeetInches::FeetInches(int f, int i) {
    FeetInches::feet = f;
    FeetInches::inches = i;

}




