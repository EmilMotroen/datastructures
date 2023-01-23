#include <iostream>
#include <iomanip>
#include "checkbook.h"

using namespace std;

int menu();

const int CHECK = 1, DEPOSIT = 2, BALANCE = 3, QUIT = 4;
int main() {
    Checkbook cb;
    float balance, amount;
    int choice;
    cout << "Enter the initial balance: $";
    cin >> balance;
    cb.setBalance(balance);
    cout << fixed << showpoint << setprecision(2);
    choice = menu();
    while (choice != QUIT) {
        if (choice == CHECK) {
            cout << "Enter check amount: $";
            cin >> amount;
            if (cb.writeCheck(amount))
                cout << "Check accepted." << endl;
            else 
                cout << "Your balance is not high enough for that check." << endl;
        } else if (choice == DEPOSIT) {
            cout << "Enter deposit amount: $";
            cin >> amount;
            cb.deposit(amount);
            cout << "Deposit accepted." << endl;
        } else {
            amount = cb.getBalance();
            cout << "Your balance is: $" << amount << endl;
        }
        choice = menu();
    }

    return 0;
}

int menu() {
    int choice;
    cout << "1  Write a check" << endl;
    cout << "2  Make a deposit" << endl;
    cout << "3  Get the balance" << endl;
    cout << "4  Quit" << endl << endl;
    cin >> choice;
    return choice;
}