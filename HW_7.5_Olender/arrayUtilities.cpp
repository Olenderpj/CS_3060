//
// Created by PJ Olender on 8/27/22.
//
#include <iostream>
#include "inputUtilities.h"

// Report the daily averages of food for the entire monkey family
    //Stores the daily food in a single array and then reports the average per day for the family
void getDailyAverage(double array[][5]){
    int totalDays = 0;
    double dailyAverage[5] = {0,0,0,0,0};

    // Get the sum of all food consumed by the family.
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){
            totalDays += 1;
            dailyAverage[j] += array[i][j];
        }
    }
    std::cout << "\n\n\n-------- Daily Family Food Averages --------\n" <<
    "Day 1: " << dailyAverage[0] / totalDays << " Lbs.\n" <<
    "Day 2: " << dailyAverage[1] / totalDays << " Lbs.\n" <<
    "Day 3: " << dailyAverage[2] / totalDays << " Lbs.\n" <<
    "Day 4: " << dailyAverage[3] / totalDays << " Lbs.\n" <<
    "Day 5: " << dailyAverage[4] / totalDays << " Lbs.\n" << std::endl;


}

// Calculates the least amount of food that a selected monkey ate.
void getLeastAmountOfFood(double array[][5]){
    int monkeySelection;
    double leastFood;
    int leastFoodDay;
    std::cout << "Get least amount of food for monkey. Enter (1, 2, 3)." << std::endl;
    std::cin >> monkeySelection;
    monkeySelection -=1;

    // initialize the variable to the first array element for easy comparison
    leastFood = array[monkeySelection][0];
    leastFoodDay = 1;

    // Iterate over the sub array to find the least food value and store the amount and day.
    for (int i = 0; i < 5; i++) {
        if (array[monkeySelection][i] < leastFood) {
            leastFood = array[monkeySelection][i];
            leastFoodDay = i + 1;
        }

    }
    std::cout << "Monkey #" << monkeySelection + 1 << " ate the least food on day " << leastFoodDay << " at " << leastFood << " lbs.\n" <<std::endl;



}



// Calculates the greatest amount of food that a selected monkey ate on a specific day.
void getGreatestAmountOfFood(double array[][5]){
    int monkeySelection;
    double greatestFood;
    int greatestFoodDay;
    std::cout << "Get greatest amount of food for monkey. Enter (1, 2, 3)." << std::endl;
    std::cin >> monkeySelection;
    monkeySelection -= 1;

    // initialize the variable to the first array element for easy comparison
    greatestFood = array[monkeySelection][0];
    greatestFoodDay = 1;

    // Iterate over the sub array to find the greatest food value and store the amount and day.
    for (int i = 0; i < 5; i++) {
        if (array[monkeySelection][i] > greatestFood) {
            greatestFood = array[monkeySelection][i];
            greatestFoodDay = i + 1;
        }

    }
    std::cout << "Monkey #" << monkeySelection + 1 << " ate the least food on day " << greatestFoodDay << " at " << greatestFood << " lbs.\n" << std::endl;

}