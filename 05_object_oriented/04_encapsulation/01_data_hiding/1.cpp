#include <iostream>
using namespace std;

class BankAccount {
    double balance;   // private data
public:
    BankAccount(double b) { 
        balance = b; 
    }

    void deposit(double amount) { 
        balance += amount; 
    }

    void withdraw(double amount) { 
        balance -= amount; 
    }

    void showBalance() { 
        cout << "Balance: $" << balance << endl; 
    }
};

int main() {
    BankAccount acc(1000);   // object created
    acc.deposit(500);        // public function
    acc.withdraw(200);
    acc.showBalance();       // accessible outside class
}
