//
// Created by PJ Olender on 8/30/22.
//

#ifndef HW_11_8_2NDATTEMP_ACCOUNT_H
#define HW_11_8_2NDATTEMP_ACCOUNT_H

#include <iostream>


// Declare a blank account structure
struct Account{
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string phoneNumber;
    double balance = 0;
    std::string dateLastPaid;
};

void processDecision(int input, Account accountList[], int SIZE);

void createAccount(Account *account);

void displayAllAccounts(Account accountList[], int SIZE);

void displayEmptyAccounts(Account accountList[], int SIZE);

void displayAccount(Account account, int accountNumber);

void searchAccountByName(Account accountList[], int SIZE);

void printAccountUpdateMenu();

void displayWelcomeMessage();

void displayGoodByeMessage();

#endif //HW_11_8_2NDATTEMP_ACCOUNT_H
