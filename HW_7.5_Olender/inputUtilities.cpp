//
// Created by PJ Olender on 8/27/22.
//
#include <iostream>

using namespace std;

// Validate users input exists within a specified range
double validateInputForRange(double min, double max, double input){
    while (input < min || input > max){
        cout << "Monkey food can NOT be less 0" << endl;
        cin >> input;
    }
    return input;

}




