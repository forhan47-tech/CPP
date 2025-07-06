#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int roll;

public:
    void input() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll: ";
        cin >> roll;
    }

    void display() const {
        cout << "Name: " << name << ", Roll: " << roll << endl;
    }
};

int main() {
    Student s;
    s.input();
    s.display();

    return 0;
}
