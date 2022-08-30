//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_11_8_OLENDER_ACTUAL_ACCOUNT_H
#define HW_11_8_OLENDER_ACTUAL_ACCOUNT_H

#include <array>
#include <regex>
#include <string>
#include <iostream>
#include "inputUtilities.h"

struct Account {
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string phoneNumber;
    double accountBalance = 0;
    std::string dateOfLastPayment;
};

void processDecision(Account account[], int input, int SIZE);

void displayEmptyAccounts(Account accountList[], int SIZE);

std::string validateTextInput(std::string input);

std::string updateTextField(std::string field);

double updateDoubleField(std::string field);

double validateNonNegativeInput(double value);

void displayAccount(Account *account, int accountNumber);

void displayAllAccounts(Account accountList[], int SIZE);

void createNewAccount(Account *account);

void searchAccountByName(Account accountList[], int SIZE);

#endif //HW_11_8_OLENDER_ACTUAL_ACCOUNT_H
