//
// Created by PJ Olender on 8/27/22.
//
#include <iostream>

// Print out the array to the screen for easy visualization.
void printArray(double array[][5]){

    for (int i = 0; i < 3; i++){
        std::cout << "[ ";

        for (int j = 0; j < 5; j++){
            std::cout << array[i][j] << " ";
        }
        std::cout << "]" <<  std::endl;
    }
}

// Print a generic prompt for the user to enter monkeys food
void printPrompt(int monkey, int day){
    std::cout << "Enter food in LBS for monkey #" << monkey + 1 << " on day #" << day + 1 << std::endl;
}
