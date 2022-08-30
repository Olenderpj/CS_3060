//
// Created by PJ Olender on 8/28/22.
//

#include <iostream>

// Display a sub menu for adding or removing parts.
void addRemovePartMenu(){
   std::cout << "1 - Add Parts\n" <<
                "2 - Remove Parts" << std::endl;
}

// Displays the menu selections of all the parts
void displaySelectPartMenu(){
    std::cout <<
    "\n-----------------------------------------------\n"<<
    "Make Selection for the part you want to change\n"<<
    "-----------------------------------------------\n"<<
    "1  - Valve\n"<<
    "2  - Bearing\n"<<
    "3  - Bushing\n"<<
    "4  - Coupling\n"<<
    "5  - Flange\n"<<
    "6  - Gear\n"<<
    "7  - Gear Housing\n"<<
    "8  - Vacuum Gripper\n"<<
    "9  - Cable\n"<<
    "10 - ROD\n\n"<<
    "0  - EXIT\n"<< std::endl;
}