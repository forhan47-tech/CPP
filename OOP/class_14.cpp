#include <iostream>
#include <vector>
using namespace std;

class Student {
    int roll;
    string name;
    vector<int> marks;  // STL container inside the class

public:
    Student(int r, string n, vector<int> m) {
        roll = r;
        name = n;
        marks = m;
    }

    void display() {
        cout << "Roll: " << roll << ", Name: " << name << endl;
        cout << "Marks: ";
        for (int mark : marks) {
            cout << mark << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> marks1 = {85, 90, 78};
    Student s1(101, "NAIMUDDIN", marks1);
    s1.display();

    return 0;
}
