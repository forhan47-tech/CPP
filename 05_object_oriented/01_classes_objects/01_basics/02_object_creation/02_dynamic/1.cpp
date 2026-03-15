#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    string name;
    int age;

    void setData(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    vector<Student> stu;

    Student s1;
    s1.setData("Diana", 24);
    stu.push_back(s1);

    Student s2;
    s2.setData("Eve", 19);
    stu.push_back(s2);

    for (auto& s : stu) {
        s.display();
    }
}
