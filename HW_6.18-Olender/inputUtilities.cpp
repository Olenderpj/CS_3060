//
// Created by PJ Olender on 8/26/22.
//
#include <iostream>
#include "inputUtilities.h"
#include <limits>

using namespace std;

// define infinity
double inf = std::numeric_limits<double>::infinity();

double validateUserInputWithinRange(double min, double max, double input){
    while (input < min || input > max){
        cout << "Invalid Entry, Try again" << endl;
        cin >> input;
    }
    return input;

}

double promptForRoomSquareFootage(int roomNumber){
    double roomSquareFootage;
    cout << "What is the total square footage of room #" << roomNumber << endl;
    cin >> roomSquareFootage;

    roomSquareFootage =  validateUserInputWithinRange(0, inf, roomSquareFootage);

    return roomSquareFootage;
}

double promptForPaintPrice(){
    double price;
    cout << "What is the price of the paint?" << endl;
    cin >> price;

    price = validateUserInputWithinRange(10, inf, price);

    return price;
}

int promptForNumberOfRooms(){
    double numRooms;
    cout << "How many rooms need painting" << endl;
    cin >> numRooms;

    numRooms = validateUserInputWithinRange(1, inf, numRooms);


    return (int)numRooms;

}

