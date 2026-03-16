#include <iostream>
using namespace std;

class Student {
public:
    static int count;  

    Student() { 
        count++; 
    }

    static void showCount() {   // member function
        cout << "Total students: " << count << endl;
    }
};

int Student::count = 0;

int main() {
    Student s1, s2;
    Student::showCount();   // called using class name
}
