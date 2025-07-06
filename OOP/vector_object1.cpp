#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int age;

    void getDetails() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }

    void display() const {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    int count;
    cout << "How many students? ";
    cin >> count;

    vector<Student> students(count); // Vector of Student objects

    for (int i = 0; i < count; ++i) {
        cout << "Student " << i + 1 << ":\n";
        students[i].getDetails();
    }

    cout << "\n--- Student List ---\n";
    for (const auto& s : students) {
        s.display();
    }

    return 0;
}
