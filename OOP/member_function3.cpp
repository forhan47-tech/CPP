#include <iostream>
using namespace std;

class Info {
    string name;

public:
    Info(string n) : name(n) {}

    void print() const {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Info i("NAIMUDDIN");
    i.print();
    return 0;
}
