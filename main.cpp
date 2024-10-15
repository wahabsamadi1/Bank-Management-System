#include <iostream>
using namespace std;

int main() {
    double balance = 1000.00, deposit, withdraw;
    int choice;

    do {
        cout << "Bank Management System\n";
        cout << "1. Deposit\n";
        cout << "2. Withdraw\n";
        cout << "3. Check Balance\n";
        cout << "4. Exit\n";
        cout << "Choose an option: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter amount to deposit: ";
                cin >> deposit;
                balance += deposit;
                cout << "Deposited: " << deposit << "\n";
                break;
            case 2:
                cout << "Enter amount to withdraw: ";
                cin >> withdraw;
                if (withdraw > balance) {
                    cout << "Insufficient funds.\n";
                } else {
                    balance -= withdraw;
                    cout << "Withdrew: " << withdraw << "\n";
                }
                break;
            case 3:
                cout << "Current balance: " << balance << "\n";
                break;
            case 4:
                cout << "Thank you for using our bank.\n";
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}
