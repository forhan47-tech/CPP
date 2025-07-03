#include <iostream>
using namespace std;

class Base {
protected:
    int id;

public:
    Base(int i) {
        id = i;
        cout << "Base constructor called. ID = " << id << endl;
    }
};

class Derived : public Base {
private:
    string name;

public:
    Derived(int i, string n) : Base(i) {  // Call Base constructor
        name = n;
        cout << "Derived constructor called. Name = " << name << endl;
    }
};

int main() {
    Derived obj(101, "NAIMUDDIN");
    return 0;
}
