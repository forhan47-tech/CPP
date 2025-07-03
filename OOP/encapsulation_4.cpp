#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;  // Hidden from outside

public:
    // Constructor to initialize balance to 0
    BankAccount() {
        balance = 0.0;
    }

    // Function to deposit money
    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
        else
            cout << "Invalid deposit amount." << endl;
    }

    // Function to retrieve balance
    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount myAccount;

    myAccount.deposit(500.0);
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    myAccount.deposit(-100.0);  // Invalid deposit
    cout << "Updated balance: $" << myAccount.getBalance() << endl;

    return 0;
}
