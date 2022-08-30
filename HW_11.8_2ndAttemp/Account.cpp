//
// Created by PJ Olender on 8/30/22.
//

#include "Account.h"
#include "inputUtilities.h"


void processDecision(int input, Account accountList[], int SIZE){
    switch(input){
        case(0): // Exit the menu
            displayGoodByeMessage();
            exit(0);

        case(1): // Display All Accounts
            std::cout << "---------------------------------------------------------------\n" <<
                         "                  Listing all Accounts\n" <<
                         "---------------------------------------------------------------" << std::endl;
            displayAllAccounts(accountList, SIZE);
            std::cout << "---------------------------------------------------------------\n" << std::endl;
            break;

        case (2): // search for account by name
            searchAccountByName(accountList, SIZE);
            break;

        case (3): // Create a new account
            displayEmptyAccounts(accountList, SIZE);
            createAccount(&accountList[promptUserChoice("Enter the EMPTY account you want to fill: ")]);
            break;

        case(4): // Update Name on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].name =
                    updateTextField("Enter the NAME you want to update");
            break;

        case(5): // Update Address on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].address =
                    updateTextField("Enter the ADDRESS you want to update");
            break;

        case(6): // Update City-State-ZipCode on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].cityStateZip =
                    updateTextField("Enter the CITE, STATE, and ZIP CODE you want to update");
            break;

        case(7): // Update Phone Number on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].phoneNumber =
                    updateTextField("Enter the PHONE NUMBER you want to update");
            break;
        case(8): // Update Balance on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].balance =
                    updateDoubleField("Enter the BALANCE you want to update");
            break;

        case(9): // Update Date of last payment on account
            accountList[promptUserChoice("Enter the account number you want to apply the update to")].dateLastPaid =
                    updateTextField("Enter the LAST PAID DATE you want to update");
            break;

        default: // required default - does nothing
            break;


    }
}

void createAccount(Account *account){
    account->name = updateTextField("Enter the New account Name");
    account->address = updateTextField("Enter the New account Address");
    account->cityStateZip = updateTextField("Enter the New account City, State, and Zip Code");
    account->phoneNumber = updateTextField("Enter the New account Phone Number");
    account->balance = updateDoubleField("Enter the New account Balance");
    account->dateLastPaid = updateTextField("Enter the New account DATE LAST PAID");

    std::cout << "\nNEW ACCOUNT INFORMATION \n" <<
              "---------------------------------------------------------------\n" << std::endl;
    displayAccount(*account, -1);
}

// Display All Accounts
void displayAllAccounts(Account accountList[], int SIZE){
    for (int i = 0; i < SIZE; i++){
        displayAccount(accountList[i], i);
    }

}

void displayEmptyAccounts(Account accountList[], int SIZE) {
    std::cout << "---------------------------------------------------------------\n" <<
                 "                      Empty Account Slots\n" <<
                 "---------------------------------------------------------------" << std::endl;
    for (int i = 0; i < SIZE; i++) {
        if (accountList[i].name.empty()) {
            std::cout << "Account " << i + 1 << " is Empty" << std::endl;
        }
    }
    std::cout << "---------------------------------------------------------------\n" << std::endl;
}

void displayAccount(Account account, int accountNumber){
    if (account.name.empty()){
        std::cout << "Account " << accountNumber + 1 << " is Empty" << std::endl;

    } else if (accountNumber == -1){
                  std::cout << "\nName: " << account.name << "\n" <<
                  "Address: " << account.address << "\n" <<
                  "City / State / Zip: " << account.cityStateZip << "\n" <<
                  "Phone Number:" << account.phoneNumber << "\n" <<
                  "Account Balance: $" << account.balance << "\n" <<
                  "Last Payment Date: " << account.dateLastPaid << "\n" << std::endl;
    } else {
        std::cout << "\nAccount Number: " << accountNumber + 1 << "\n" <<
                  "Name: " << account.name << "\n" <<
                  "Address: " << account.address << "\n" <<
                  "City / State / Zip: " << account.cityStateZip << "\n" <<
                  "Phone Number:" << account.phoneNumber << "\n" <<
                  "Account Balance: $" << account.balance << "\n" <<
                  "Last Payment Date: " << account.dateLastPaid << "\n" << std::endl;
    }
}

void searchAccountByName(Account accountList[], int SIZE){
    int count = 0;
    std::string searchString;
    std::cout << "Enter a name to search by: " << std::endl;

    getline(std::cin, searchString);
    searchString = validateTextInput(searchString);

    std::cout << "---------------------------------------------------------------\n" <<
                 "Searching Accounts for names Matching \' " << searchString << " \'\n" <<
                 "---------------------------------------------------------------\n" << std::endl;

    for (int i = 0; i < SIZE; i++){
        if (accountList[i].name.find(searchString) != std::string::npos || !accountList[i].name.empty()) {
            count += 1;
            displayAccount(accountList[i], i);
        }
    }

    // No accounts matching the search input
    if (count == 0){
        std::cout << "SEARCH RETURNED NO MATCH FOR: \' " << searchString << " \'" << std::endl;
    }
    std::cout << "---------------------------------------------------------------\n" << std::endl;
}



void printAccountUpdateMenu(){
    std::cout << "---------------------------------------------------------------\n" <<
                 "                Account Modification Options\n" <<
                 "---------------------------------------------------------------\n" <<
                 "0 - EXIT\n" <<
                 "1 - List All Accounts\n" <<
                 "2 - Search for account by name\n" <<
                 "3 - Create a new account\n" <<
                 "4 - Update Account Name\n" <<
                 "5 - Update Account Address\n" <<
                 "6 - Update City / State / Zip Code\n" <<
                 "7 - Update Phone Number\n" <<
                 "8 - Update Account Balance\n" <<
                 "9 - Update Date of last Payment\n" <<
                 "---------------------------------------------------------------" << std::endl;
}

void displayWelcomeMessage() {
    std::cout << "###############################################################\n" <<
              "                       Welcome to the Bank!\n" <<
              "###############################################################\n" << std::endl;
}

void displayGoodByeMessage() {
    std::cout << "###############################################################\n" <<
                 "            Thank you for visiting the bank today\n" <<
                 "###############################################################\n" << std::endl;
}
