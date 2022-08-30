

#include "Account.h"

std::string validateTextInput(std::string input){

    while (input.empty()){
        std::cout << "This field can NOT be empty, Try again";
        std::cin >> input;
    }
    return input;
}

std::string updateTextField(std::string field ){
    std::string input;
    std::cout << "Enter a new value for " << field << std::endl;
    std::cin >> input;

    input = validateTextInput(input);

    return input;
}

double validateNonNegativeInput(double value){
    while (value < 0){
        std::cout << "This field can not be negative" << std::endl;
        std::cin >> value;
    }
    return value;
}

double updateDoubleField(std::string field){
    double input;
    std::cout << "Enter a new value for " << field << std::endl;
    std::cin >> input;

    input = validateNonNegativeInput(input);

    return input;
}


void displayAccount(Account *account, int accountNumber){
    std::cout << "Account Number: " << accountNumber + 1 << "\n" <<
    "Name: " << account->name << "\n" <<
    "Address: " << account->address << "\n" <<
    "City / State / Zip: " << account->cityStateZip << "\n" <<
    "Phone Number:" << account->phoneNumber << "\n" <<
    "Account Balance: $" << account->accountBalance << "\n" <<
    "Last Payment Date: " << account->dateOfLastPayment << "\n"<< std::endl;
}

void processDecision(Account *account, int input){
    switch(input){
        case(1):
            account->name = updateTextField("Name");
            break;
        case(2):
            account->address = updateTextField("Address");
            break;
        case(3):
            account->cityStateZip = updateTextField("City, State, Zip Code");
            break;
        case(4):
            account->phoneNumber = updateTextField("Phone Number");
            break;
        case(5):
            account->accountBalance = updateDoubleField("Account Balance");
            break;
        case(6):
            account->dateOfLastPayment = updateTextField("Date of Last Payment");
            break;
        case(7):
            std::cout << "This will create a new account" <<  std::endl;
            break;
        case(8):
            std::cout << "This will search an account by name" <<  std::endl;
            break;
        default:
            break;
    }
}

void displayAllAccounts(Account accountList[], int SIZE){
    for (int i = 0; i < SIZE; i++){
        if (accountList[i].name.empty()){
            std::cout << "----------------------------------------------\n" <<
             "Account " << i + 1 << " is available to open.\n" <<
             "----------------------------------------------" << std::endl;
        } else {
            displayAccount(&accountList[i], i);
        }
    }
}

void createNewAccount(Account *account){
            account->name = updateTextField("Name");
            account->address = updateTextField("Address");
            account->cityStateZip = updateTextField("City, State, Zip Code");
            account->phoneNumber = updateTextField("Phone Number");
            account->accountBalance = updateDoubleField("Account Balance");
            account->dateOfLastPayment = updateTextField("Date of Last Payment");
}