#include <iostream>
#include <vector>
using namespace std;

class Student {
public:
    int roll;

    Student() { 
        roll = -1; // default
    }   

    Student(int r) { // parameterized
        roll = r;
    }

    void show() { 
        cout << "Roll: " << roll << endl; 
    }
};

int main() {
    vector<Student> stu;

    stu.emplace_back(); 
    stu.emplace_back(100); 

    for (int i = 0; i < stu.size(); i++) {
        stu[i].show();
    }
}
