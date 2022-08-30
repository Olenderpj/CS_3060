//
// Created by PJ Olender on 8/26/22.
//

#include <iostream>

void formatOutput(double paintRequired, double laborHours, double paintCost, double laborCost){
    double totalCost = paintCost + laborCost;

    std::cout << "\n\n\n\n" <<
    "              Paint Job Estimate\n" <<
    "##################################################\n" <<
    "Total Paint Required:   " << paintRequired << " Gallons\n" <<
    "Labor Hours:            " << laborHours << "\n" <<
    "Paint Cost:             $" << paintCost << "\n" <<
    "Labor Cost:             $" << laborCost << "\n" <<
    "Total Cost:             $" << totalCost <<
    std::endl;

}