//
// Created by PJ Olender on 8/28/22.
//

#ifndef HW_11_8_OLENDER_ACTUAL_ACCOUNT_H
#define HW_11_8_OLENDER_ACTUAL_ACCOUNT_H


#include <string>
#include <array>
#include <iostream>

struct Account {
    std::string name;
    std::string address;
    std::string cityStateZip;
    std::string phoneNumber;
    double accountBalance = 0;
    std::string dateOfLastPayment;
};

void processDecision(Account *account, int input);

std::string validateTextInput(std::string input);

std::string updateTextField(std::string field);

double updateDoubleField(std::string field);

double validateNonNegativeInput(double value);

void displayAccount(Account *account);

void displayAllAccounts(Account accountList[], int SIZE);

void createNewAccount(Account *account);

#endif //HW_11_8_OLENDER_ACTUAL_ACCOUNT_H
