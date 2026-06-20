#include "include/BankChecker.h"

int main() {
    string bankName;

    cout << "Enter Bank Name: ";
    cin >> bankName;

    if (BankChecker::isValidBank(bankName)) {
        cout << "Valid Bank" << endl;
    } else {
        cout << "Invalid Bank" << endl;
    }

    return 0;
}