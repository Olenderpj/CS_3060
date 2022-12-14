//
// Created by PJ Olender on 8/28/22.
//

#include "outputUtilities.h"

void printAccountUpdateMenu(){
    std::cout << "---------------------------------------------------------------\n" <<
                 "                Account Modification Options\n" <<
                 "---------------------------------------------------------------\n" <<
    "1 - Name\n" <<
    "2 - Address\n" <<
    "3 - City / State / Zip Code\n" <<
    "4 - Phone Number\n" <<
    "5 - Account Balance\n" <<
    "6 - Date of last Payment\n" <<
    "7 - Search for account by Name\n" <<
    "8 - Create new account\n" <<
    "\n0 - EXIT" << std::endl;
}

void displayUpdatedAccountHeader(){
    std::cout << "----------------------------------------------\n" <<
                 "                Updated Accounts\n" <<
                 "----------------------------------------------" << std::endl;
}

void displayGoodByeMessage() {
    std::cout << "---------------------------------------------------------------\n" <<
                 "            Thank you for visiting the bank today\n" <<
                 "---------------------------------------------------------------\n" << std::endl;
}