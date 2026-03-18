#include <iostream>
using namespace std;

class Payment {
public:
    virtual void pay() {
        cout << "Processing generic payment" << endl;
    }
};

class CreditCard : public Payment {
public:
    void pay() override {
        cout << "Payment done using Credit Card" << endl;
    }
};

class PayPal : public Payment {
public:
    void pay() override {
        cout << "Payment done using PayPal" << endl;
    }
};

int main() {
    Payment* p;

    CreditCard cc;
    PayPal pp;

    p = &cc;
    p->pay();   // ✅ calls CreditCard's overridden method

    p = &pp;
    p->pay();   // ✅ calls PayPal's overridden method

    return 0;
}
