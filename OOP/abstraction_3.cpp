#include <iostream>
using namespace std;

// Abstract base class
class PaymentGateway {
public:
    virtual void pay(double amount) = 0;  // Pure virtual function
    virtual ~PaymentGateway() {}          // Virtual destructor (good practice)
};

// Concrete class 1
class CreditCard : public PaymentGateway {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " BDT using Credit Card." << endl;
    }
};

// Concrete class 2
class Bkash : public PaymentGateway {
public:
    void pay(double amount) override {
        cout << "Paid " << amount << " BDT using bKash." << endl;
    }
};

int main() {
    PaymentGateway* pg1 = new CreditCard();
    PaymentGateway* pg2 = new Bkash();

    pg1->pay(1500);
    pg2->pay(2000);

    delete pg1;
    delete pg2;
    return 0;
}
