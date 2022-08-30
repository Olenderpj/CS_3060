#include <iostream>
#include "inputUtilities.h"
#include "outputUtilitiles.h"
#include "arrayUtilities.h"

// used as a flag to visualize the array.
int visualize = 0;

int main() {

    // Define Infinity
    double inf = std::numeric_limits<double>::infinity();
    double dailyFood;
    double monkeyFood[3][5];

    // Have the user input the monkeys food in lbs into the array
    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 5; j++){

            printPrompt(i, j);
            std::cin >> dailyFood;

            // Validate non-negative input for food.
            dailyFood = validateInputForRange(0, inf, dailyFood);
            monkeyFood[i][j] = dailyFood;
        }
    }

    // Generate the report for the zoo
    std::cout << "###############################################\n" <<
                 "                 Monkey Report              \n" <<
                 "###############################################\n" << std::endl;

    // Print the array to the output
    if (visualize != 0) {
        printArray(monkeyFood);
    }

    getDailyAverage(monkeyFood);
    getLeastAmountOfFood(monkeyFood);
    getGreatestAmountOfFood(monkeyFood);



    return 0;
}
