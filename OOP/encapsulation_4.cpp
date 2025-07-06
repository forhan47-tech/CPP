#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance;

public:
    BankAccount() : balance(0.0) {}

    void deposit(double amount) {
        if (amount > 0)
            balance += amount;
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance)
            balance -= amount;
    }

    double getBalance() const {
        return balance;
    }
};

int main() {
    BankAccount account;
    account.deposit(1000);
    account.withdraw(300);
    cout << "Current Balance: $" << account.getBalance() << endl;

    return 0;
}
