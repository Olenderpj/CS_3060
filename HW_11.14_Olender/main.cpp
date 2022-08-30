#include <string>
#include "inputUtilities.h"
#include "partsUtilities.h"

const int PARTS_BIN_SIZE = 10;

int main() {

    // Create structs for all parts
    struct Part valve, bearing, bushing, coupling, flange, gear, gearHousing, vacuumGripper, cable, rod;

    // Initialize the values of each struct
    valve.description = "Valve";
    valve.quantity = 10;
    bearing.description = "Bearing";
    bearing.quantity = 5;
    bushing.description = "Bushing";
    bushing.quantity = 15;
    coupling.description = "Coupling";
    coupling.quantity = 21;
    flange.description = "Flange";
    flange.quantity = 7;
    gear.description = "Gear";
    gear.quantity = 5;
    gearHousing.description = "Gear Housing";
    gearHousing.quantity = 5;
    vacuumGripper.description = "Vacuum Gripper";
    vacuumGripper.quantity = 25;
    cable.description = "Cable";
    cable.quantity = 18;
    rod.description = "Rod";
    rod.quantity = 12;

    // Assign the initialized parts to the partsBin array
    Part partsBin[PARTS_BIN_SIZE] = {valve, bearing, bushing, coupling, flange, gear, gearHousing, vacuumGripper, cable, rod};

    // Initial Display of the parts bin
    displayParts(partsBin);
    int choice;

    // Program control loop
    while (true){
        choice = promptWhichPartToChange();

        // User chooses to exit the loop
        if (choice == 0) {
            break;
        }
            processPartDecision(choice, partsBin);
            displayParts(partsBin);
        }
    return 0;
}




