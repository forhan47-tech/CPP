#include <iostream>
using namespace std;

class Base {
protected:
    int id;

public:
    Base(int i) : id(i) {} 
};

class Derived : public Base {
private:
    string name;

public:
    Derived(int i, string n) : Base(i), name(n) {} // Initialize Base part

    void show() const {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
};

int main() {
    Derived obj(101, "NAIMUDDIN");
    obj.show();
    return 0;
}
