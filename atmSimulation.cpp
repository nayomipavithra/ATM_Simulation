#include <iostream>
using namespace std;

int main() {
    int pin = 1234;          // Default PIN
    int enteredPin;
    double balance = 5000;  // Initial balance
    int choice;
    double amount;

    cout << "===== Welcome to ATM =====" << endl;
    cout << "Enter your PIN: ";
    cin >> enteredPin;

    if (enteredPin != pin) {
        cout << "Incorrect PIN. Access Denied!" << endl;
        return 0;
    }

    do {
        cout << "\n===== ATM Menu =====" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Your current balance is: Rs. " << balance << endl;
                break;

            case 2:
                cout << "Enter amount to deposit: Rs. ";
                cin >> amount;
                if (amount > 0) {
                    balance += amount;
                    cout << "Deposit successful!" << endl;
                } else {
                    cout << "Invalid amount!" << endl;
                }
                break;

            case 3:
                cout << "Enter amount to withdraw: Rs. ";
                cin >> amount;
                if (amount > 0 && amount <= balance) {
                    balance -= amount;
                    cout << "Please collect your cash." << endl;
                } else {
                    cout << "Insufficient balance or invalid amount!" << endl;
                }
                break;

            case 4:
                cout << "Thank you for using the ATM." << endl;
                break;

            default:
                cout << "Invalid choice. Try again!" << endl;
        }

    } while (choice != 4);

    return 0;
}
