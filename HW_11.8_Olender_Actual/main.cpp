#include <iostream>
#include "Account.h"
#include "inputUtilities.h"
#include "outputUtilities.h"

const int SIZE = 2;

int main() {
    Account a1, a2; //, a3, a4, a5, a6, a7, a8, a9, a10;

    Account accountList[SIZE] = {a1, a2};

    // program loop
    std::cout << "###################################################\n" <<
                 "               Welcome to the Bank!\n"
                 "###################################################" << std::endl;
    while (true){
        displayAllAccounts(accountList, SIZE);
        int accountSelection = promptUserChoice("What Account would you like to work with? (Press 0 to EXIT)\n");

        // The user does NOT select the exit option
        if (accountSelection != 0){

            // The selected account is empty
            if (accountList[accountSelection - 1].name.empty()){
                createNewAccount(&accountList[accountSelection - 1]);

                displayUpdatedAccountHeader();
                displayAllAccounts(accountList, SIZE);

            // Process desired changes to the account
            } else {
                printAccountUpdateMenu();
                int secondaryDecision = promptUserChoice("");
                processDecision(accountList, secondaryDecision, SIZE);
            }

        } else {
            displayGoodByeMessage();
            break; // used to break out of the program loop
        }

    }

    /*while (true){
        printAccountUpdateMenu();
        int optionChoice = promptUserChoice("Make a selection from the Menu above: ");

        processDecision(accountList, optionChoice, SIZE);
        //break;
    }*/
    return 0;
}
