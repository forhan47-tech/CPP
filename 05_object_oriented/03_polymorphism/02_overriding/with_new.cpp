#include <iostream>
using namespace std;

class Payment {
public:
    virtual void process() {
        cout << "Processing generic payment" << endl;
    }
};

class CreditCard : public Payment {
public:
    void process() override {
        cout << "Processing credit card payment" << endl;
    }
};

class PayPal : public Payment {
public:
    void process() override {
        cout << "Processing PayPal payment" << endl;
    }
};

int main() {
    Payment* p1 = new CreditCard();
    Payment* p2 = new PayPal();

    p1->process(); 
    p2->process(); 

    delete p1;
    delete p2;
}
