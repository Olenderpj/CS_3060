//
// Created by PJ Olender on 8/27/22.
//

#ifndef HW_6_18_OLENDER_JOBESTIMATOR_H
#define HW_6_18_OLENDER_JOBESTIMATOR_H

// Calculate the total gallons of paint needed to complete the job
double calculateTotalGallonsOfPaint(double spaceRate, double squareFootage);

// Calculate the total cost of paint for the job
double calculateTotalPaintCost(double totalGallons, double costPerGallon);

// Calculate the total hours of labor needed to complete the job
double calculateTotalLaborHours(double spaceRate, double squareFootage);

// Calculate the total labor cost
double calculateTotalLaborCost(double laborRate, double totalLaborHours);

#endif //HW_6_18_OLENDER_JOBESTIMATOR_H
