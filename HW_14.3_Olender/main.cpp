/*/////////////////////////////////////////////////////////////////////////////////////////////
 CLASS: CS 3060
 NAME: PJ OLENDER
 DATE: 09/03/2022
 ASSIGNMENT #: 15.11

 Carpet Calculator
     The Westfield Carpet Company has asked you to write an application that calculates the
     price of carpeting for rectangular rooms. To calculate the price, you multiply the area
     of the floor (width times length) by the price per square foot of carpet. For example,
     the area of floor that is 12 feet long and 10 feet wide is 120 square feet. To cover that
     floor with carpet that costs $8 per square foot would cost $960. (12 x 10 x 8 = 960.)
     First, you should create a class named RoomDimension that has two FeetInches
     objects as attributes: one for the length of the room, and one for the width. (You should
     use the version of the FeetInches class you created in Programming Challenge 11 with
     the addition of a multiply member function. You can use this function to calculate
     the area of the room.) The RoomDimension class should have a member function that
     returns the area of the room as a FeetInches object.

     Next, you should create a RoomCarpet class that has a RoomDimension object as an
     attribute. It should also have an attribute for the cost of the carpet per square foot.
     The RoomCarpet class should have a member function that returns the total cost of
     the carpet.

     Once you have written these classes, use them in an application that asks the user to
     enter the dimensions of a room and the price per square foot of the desired carpeting.

     The application should display the total cost of the carpet.

 ///////////////////////////////////////////////////////////////////////////////////////////// */

#include <iostream>
#include "RoomCarpet.h"
#include "RoomDimension.h"

int main() {
    double roomLength;
    double roomWidth;
    double cost;

    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "\tWestfield Carpet Company Estimate Calculator" << std::endl;
    std::cout << "----------------------------------------------------" << std::endl;
    std::cout << "What is the LENGTH of the room (IN INCHES): " << std::endl;
    std::cin >> roomLength;
    std::cout << "What is the WIDTH of the room (IN INCHES): " << std::endl;
    std::cin >> roomWidth;

    FeetInches carpetLength(roomLength);
    FeetInches carpetWidth(roomWidth);

    RoomDimension roomDimension(carpetLength, carpetWidth);

    std::cout << "----------------------------------------------------" << std::endl;

    std::cout << "What is the COST of the carpet per square foot: " << std::endl;
    std::cin >> cost;

    std::cout << "----------------------------------------------------" << std::endl;

    RoomCarpet roomCarpet(roomDimension, cost);

    std::cout << "The total cost of the carpet is: $" << roomCarpet.totalCost();

    return 0;
}
