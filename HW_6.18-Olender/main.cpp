#include "inputUtilities.h"
#include "outputUtilities.h"
#include "jobEstimator.h"

int main() {

    // Define initial rates
    const double LABOR_RATE = 25.00;
    const double SQFT_RATE = 110;

    // Define empty variables
    int numRooms;
    double paintCost;
    double totalWallSqFt = 0;

    // Prompt the user for input
    numRooms = promptForNumberOfRooms();
    paintCost = promptForPaintPrice();

    // Prompt the user for each room's Square Footage
    for (int i = 1; i <= numRooms; i++){
        totalWallSqFt += promptForRoomSquareFootage(i);
    }

    // Calculate the totals
    double totalGallons = calculateTotalGallonsOfPaint(SQFT_RATE, totalWallSqFt);
    double totalPaintCost = calculateTotalPaintCost(totalGallons, paintCost);
    double totalLaborHours = calculateTotalLaborHours(SQFT_RATE, totalWallSqFt);
    double totalLaborCost = calculateTotalLaborCost(LABOR_RATE, totalLaborHours);

    // Output the estimate breakdown.
    formatOutput(totalGallons,
                 totalLaborHours,
                 totalPaintCost,
                 totalLaborCost);

    return 0;
}
