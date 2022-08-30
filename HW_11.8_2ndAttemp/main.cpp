#include "Account.h"
#include "inputUtilities.h"


const int SIZE = 4;
int main() {

    // Individual Account Declarations
    Account a1, a2, a3, a4;
    // Assign Account structs to account list array through an initialization list
    Account accountList[SIZE] = {a1, a2, a3, a4};

    displayWelcomeMessage();

    // Program loop
    while (true){
        printAccountUpdateMenu();
        int input = promptUserChoice("What would you like to do? (Enter an integer)");

        processDecision(input, accountList, SIZE);

        //break;
    }

    return 0;
}
