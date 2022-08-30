//
// Created by PJ Olender on 8/27/22.
//

double calculateTotalGallonsOfPaint(double spaceRate, double squareFootage){
    return squareFootage / spaceRate;

}

double calculateTotalLaborHours(double spaceRate, double squareFootage){
    return (squareFootage / spaceRate) * 8;

}

double calculateTotalPaintCost(double totalGallons, double costPerGallon){
    return totalGallons * costPerGallon;
}

double calculateTotalLaborCost(double laborRate, double totalLaborHours){
    return totalLaborHours * laborRate;
}