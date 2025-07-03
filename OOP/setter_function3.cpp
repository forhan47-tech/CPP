#include <iostream>
using namespace std;

class Person {
private:
    string name;

public:
    // Setter for name
    void setName(string n) {
        name = n;
    }

    // Getter with void return type — just prints the name
    void getName() const {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p;
    p.setName("Naimuddin");
    p.getName(); // Prints: Name: Naimuddin

    return 0;
}
