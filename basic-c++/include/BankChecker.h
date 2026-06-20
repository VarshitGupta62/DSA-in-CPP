#ifndef BANKCHECKER_H
#define BANKCHECKER_H

#include <iostream>
#include <string>
using namespace std;

class BankChecker {
public:
    static bool isValidBank(string bankName) {
        string banks[] = {
            "SBI",
            "HDFC",
            "ICICI",
            "PNB",
            "Axis"
        };

        for (string bank : banks) {
            if (bank == bankName) {
                return true;
            }
        }
        return false;
    }
};

#endif